const TelegramBot = require('node-telegram-bot-api');

const token = 'YOUR_API_KEY';
const bot = new TelegramBot(token, {polling: true});

bot.sendMessage(CHAT_ID, 'Hello, world!');
