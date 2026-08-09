import express, { type Express, type Request, type Response } from 'express';

import gameController from './controllers/GameController.ts';
import { tracer, prePostLogger, logger } from './middleware/Context.ts';

import cors from 'cors';
import helmet from 'helmet';


const app: Express = express();
const port = process.env.SERVER_PORT || 3000;

app.use(cors());
app.use(helmet());
app.use(tracer);
app.use(prePostLogger);
app.use(gameController);

app.use(express.static('webclient/client/scripts'));
app.use(express.static('webclient/client/styles'));
app.use(express.static('webclient/client/sprites'));

app.listen(port, () => {
    logger.info("Server running on port " + port + "/");
});

console.log(app)

export default app;