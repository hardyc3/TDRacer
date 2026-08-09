import { type Request, type Response } from 'express';
import async_hooks from 'async_hooks';
import { v4 as uuidv4 } from 'uuid';
import pino from 'pino';

const SERVER_PATH = process.env.SERVER_PATH || "./webclient/server";
const CLIENT_PATH = process.env.CLIENT_PATH || "./webclient/client";

const TRACE_ID_KEY = 'traceId';

const localStorage = new async_hooks.AsyncLocalStorage();

const tracer = function (req: Request, res: Response, next: Function) {
    const traceId = req.headers[TRACE_ID_KEY] || uuidv4();
    res.setHeader('x-trace-id', traceId);
    localStorage.run(new Map([[TRACE_ID_KEY, traceId]]), () => {
        next();
    });
}

const prePostLogger = function (req: Request, res: Response, next: Function) {
    logger.info("Request received: " + req.method + " " + req.url);

    res.on('finish', () => {
        logger.info("Sending response: " + res.statusCode);
    });

    next();
}

const getTraceId = () => {
  const store = localStorage.getStore();
  return store ? store.get(TRACE_ID_KEY) : null;
};

const logger = pino({
    mixin() {
        return { traceId: getTraceId() };
    }
});


export { tracer, prePostLogger, logger, SERVER_PATH, CLIENT_PATH };