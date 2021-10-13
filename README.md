# Telegram
Goal: Control leds from arduino with telegram and explain the strugles.


## Steps
Step 1: Google control arduino leds with telegram.

I found a video how a youtuber send text with telegram and the arduino led changes color. I dont have a color led on my arduino so i gone start with turning my led on and off. I know that i need to use telegram so I gone download this app on my pc and computer.

https://www.youtube.com/watch?v=hLCus61BBGA

step 2 Install the CTbot and arduino json libary

![image](https://user-images.githubusercontent.com/29665951/137124990-910f64f2-0bc7-4a07-a042-888aa5abcad7.png)

![image](https://user-images.githubusercontent.com/29665951/137125275-82ab690a-2bd7-4cbd-8547-e4bc2ccdbe46.png)

![image](https://user-images.githubusercontent.com/29665951/137125450-d387ed06-d1c3-4b4e-ada8-9823d8db3668.png)

Step 3 open example code 

I think that the echoBot the most simple option is to test and with that data I can expand the code.

![image](https://user-images.githubusercontent.com/29665951/137125764-4d72b013-0e88-4370-97ef-5634d7609fd7.png)

Step 4 Create Telegram bot

Go to telegram and type @botFather en select the one in the image bellow.

![image](https://user-images.githubusercontent.com/29665951/137126659-b947fa3c-cca9-4ccf-92a4-6566ed30c8a2.png)

Klik start

![image](https://user-images.githubusercontent.com/29665951/137126884-22f3836e-f7a7-4092-b5ea-362d0a9b1066.png)

Klik new bot

![image](https://user-images.githubusercontent.com/29665951/137126932-836cc08a-47d9-4d1c-9ee8-0e465d4f2dd9.png)

Give it a name and a username.

Copy the token and place this in the arduino code.

![image](https://user-images.githubusercontent.com/29665951/137127528-a14ca39a-6194-4ec3-a656-be29076b40b7.png)

Start the arduino bot by clicking on the top link.

![image](https://user-images.githubusercontent.com/29665951/137128318-8e07667f-971a-4abf-ad9c-2e0c0c845bdf.png)


Step 4 change the arduino code

Change the wifi SSID, password and token.

![image](https://user-images.githubusercontent.com/29665951/137127889-ae7478ff-a70d-4ee1-bf68-94fbf1fc3698.png)

Step 5 Test code

Connect the arduino to the pc and upload the code.

Check in the serial monitor if connection works. 

![image](https://user-images.githubusercontent.com/29665951/137128856-ef9c0b66-cac7-4c63-a14f-9ed5c3bebe73.png)

I replace the loop code with my own code.

![image](https://user-images.githubusercontent.com/29665951/137133975-35bc07a5-a7e3-40de-8954-74b5c4b6ba3a.png)



The problem that I had whas that I forgot to place the bellow code in the void setup. This code makes it posible to use our build in led light in your code. 

pinMode(LED_BUILTIN, OUTPUT);

![image](https://user-images.githubusercontent.com/29665951/137134104-f33ca9c2-17db-4f82-bf8c-09cf1781c8b2.png)


Second problem that is had was that if I say digitalWrite(LED_BUILTIN, HIGH); the led light goes off and if I say digitalWrite(LED_BUILTIN, LOW); the led light goed on.

Step 6 Change color of led strip.




