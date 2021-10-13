/*
 Name:        echoBot.ino
 Created:     12/21/2017
 Author:      Stefano Ledda <shurillu@tiscalinet.it>
 Description: a simple example that check for incoming messages
              and reply the sender with the received message
*/
#include "CTBot.h"
CTBot myBot;

String ssid  = "Ziggo11550"    ; // REPLACE mySSID WITH YOUR WIFI SSID
String pass  = "VRfquHFATPyu"; // REPLACE myPassword YOUR WIFI PASSWORD, IF ANY
String token = "2041577637:AAGLTzysphNyXKW6SxJ5b5LeEmwJx1mUuDQ"   ; // REPLACE myToken WITH YOUR TELEGRAM BOT TOKEN

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize the Serial
  Serial.begin(115200);
  Serial.println("Starting TelegramBot...");

  // connect the ESP8266 to the desired access point
  myBot.wifiConnect(ssid, pass);

  // set the telegram bot token
  myBot.setTelegramToken(token);
  
  // check if all things are ok
  if (myBot.testConnection())
    Serial.println("\ntestConnection OK");
  else
    Serial.println("\ntestConnection NOK");
}


void loop() {
  // a variable to store telegram message data
  TBMessage msg;

  // if there is an incoming message...
  if (CTBotMessageText == myBot.getNewMessage(msg))

//  write the telegram chat in serial monitor
  Serial.println(msg.text);
  
  if(msg.text == "off"){
    digitalWrite(LED_BUILTIN, HIGH);
     Serial.println("led go off");
  }
  if (msg.text == "on"){
    digitalWrite(LED_BUILTIN, LOW);
     Serial.println("led go on");
  }
   
  // wait 500 milliseconds
  delay(500);
  
}
