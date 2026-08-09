import express, { type Request, type Response } from 'express';
import { logger } from '../middleware/Context.ts';
import path from 'path';
import { CLIENT_PATH } from '../middleware/Context.ts';

const app = express.Router();

app.get("/", (req: Request, res: Response) => {
    logger.info("Getting Game Controller GET /");
    res.sendFile(path.resolve(CLIENT_PATH, "index.html"));
});

export default app;