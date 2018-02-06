# Open BuskingBot - Arduino drum player robot

- Youtube Demo
    - https://youtu.be/ZQszbdXlZFM?list=PLXEhuWdUlcWBM9V6OUaw-OV34vn0xmkCZ
- Youtube instruction
    - https://www.youtube.com/watch?v=0rcoJJfILkA&t=3s&list=PLXEhuWdUlcWBM9V6OUaw-OV34vn0xmkCZ&index=1

## materials

------------------------------------ Parts ---------------------------------
- Servo Motor MG90S  
    - http://amzn.to/2DfyEiF
- Arduino Nano
    - http://amzn.to/2qORUkC
- Arduino Nano I/O Expansion  
    - http://amzn.to/2qODdhc
- Bluetooth HC-05  
    - http://amzn.to/2D087by
- Dupont Cable (M-M)  
    - http://amzn.to/2CWBewp
- 5v usb battery  
    - http://amzn.to/2qS1ao5

------------------------------------ Tools ---------------------------------
- Hot melt glue gun
    - http://amzn.to/2CMf8cE
- \+ Driver (3mm)
    - http://amzn.to/2Di6Dab
- 3D printer  (P802MA)
    - http://amzn.to/2CWuVZE
- Filament for 3d print (PLA 1.75mm)
    - http://amzn.to/2DhxPpo

------------------------------------ Instruction --------------------------

- Source Code
    - https://github.com/happythingsmaker/openBuskingBot
- 3D model file (for 3d printer)
    - https://www.thingiverse.com/thing:2742894
- Youtube
    - https://www.youtube.com/playlist?list=PLXEhuWdUlcWBM9V6OUaw-OV34vn0xmkCZ
- Manual
    - https://github.com/happythingsmaker/openBuskingBot

------------------------------------ About Maker ---------------------------------

- Instagram: [https://www.instagram.com/happythingsmaker/](https://www.instagram.com/happythingsmaker/)
- Facebook: [https://www.facebook.com/happyThingsMaker/](https://www.facebook.com/happyThingsMaker/)
- Blog : [http://happyThingsMaker.com/](http://happyThingsMaker.com/)

---

# Instruction

## Preparing Materials

![](img/0.OverallParts.jpg)


## Assembling OverView

![](img/2.assem_1.jpg)

![](img/2.assem_2.jpg)

![](img/2.assem_3.jpg)


## Assembling Arms

![](img/2.assem_5.jpg)

![](img/2.assem_6.jpg)

![](img/2.assem_7.jpg)

![](img/2.assem_8.jpg)

![](img/2.assem_9.jpg)


## Assembling Body \/ Attaching Arduino Board and Bluethooth inside it

* Prepare parts and put together by using a hotmelt gun

    ![](img/2.assem_10.jpg)

* Connect motors to Arduino board.

    ![](img/2.assem_10_1.jpg)

    ![](img/2.assem_10_2.jpg)

    ![](img/2.assem_10_3.jpg)

## Download Arduino Code and Upload it onto your Arduino

Source Code :  [https://github.com/happythingsmaker/openBuskingBot/tree/master/arduino](https://github.com/happythingsmaker/openBuskingBot/tree/master/arduino)

- **For bluetooth play(Download this) - openBuskingBot_Serial_BT_Servo.ino**

- For Serial Communication (for test)- openBuskingBot_Serial_Servo.ino

## Assemble arms to body.

* Use screw driver and hotmelt glue gun.

    ![](img/2.assem_11.jpg)    
    
    ![](img/2.assem_12.jpg)
    
    ![](img/2.assem_13.jpg)
    
    ![](img/2.assem_14.jpg)

    ![](img/2.assem_15.jpg)

* (optional) attach hand - it can make sound louder

    ![](img/2.assem_16.jpg)

    ![](img/2.assem_17.jpg)
    

## Application test

1. Download an Applicatoin 

    [https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal)
   
    ![](img/3_1_1.jpg)

2. Click Devices

    ![](img/3_1.jpg)

3. Click Setting icon

    ![](img/3_2.jpg)

4. Click "Scan"
    it can vary based on your Android phone 

    ![](img/3_3.jpg)

5. Find "HC-05"
    "HC-05" is name of the bluetooth model. it can vary based on your bluetooth. in this example, we use HC serise.

    ![](img/3_4.jpg)

6. Type pincode 1234 ( if it is not working, try 0000)

    ![](img/3_5.jpg)

6. If success, back to the application and check the bluetooth that you selected. 

    ![](img/3_6.jpg)

7. Terminal - Select "Connect Icon"

    ![](img/3_7.jpg)

    ![](img/3_8.jpg)

8. Long Press a Button written "M1" 

    ![](img/3_9.jpg)

9. This step is for saving charactor which will be sent to your robot from android. we can send the charactors by typing. This step can help you send message conveiently.

    ![](img/3_10.jpg)

    ![](img/3_11.jpg)

## DONE. Let's Play!

https://www.youtube.com/watch?v=ZQszbdXlZFM&index=1&list=PLXEhuWdUlcWBM9V6OUaw-OV34vn0xmkCZ
