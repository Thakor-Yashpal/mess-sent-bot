const twilio = require('twilio');

const client = twilio(TWILIO_ACCOUNT_SID, TWILIO_AUTH_TOKEN);

client.messages
  .create({
     body: 'Hello, world!',
     from: TWILIO_PHONE_NUMBER,
     to: YOUR_PHONE_NUMBER
   })
  .then(message => console.log(message.sid));
