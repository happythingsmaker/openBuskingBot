# Open BuskingBot - Arduino drum player robot

![](img/openBuskingBot.jpg)


- Youtube Demo
    - https://youtu.be/ZQszbdXlZFM?list=PLXEhuWdUlcWBM9V6OUaw-OV34vn0xmkCZ
- Youtube instruction
    - https://youtu.be/0rcoJJfILkA?list=PLXEhuWdUlcWBM9V6OUaw-OV34vn0xmkCZ
- Instructables
    - https://www.instructables.com/id/BuskingBot-Arduino-Drum-Player-Robot/

## Materials
- https://eunchan.me/BUSKINGBOT-d081a51e90bc4085ab07753aee4c1f09
------------------------------------ Instruction --------------------------

- Source Code
    - https://github.com/happythingsmaker/openBuskingBot
- 3D model file (for 3d printer)
    - https://www.thingiverse.com/thing:2742894
- Youtube
    - https://www.youtube.com/playlist?list=PLXEhuWdUlcWBM9V6OUaw-OV34vn0xmkCZ
- Manual
    - https://eunchan.me/BUSKINGBOT-d081a51e90bc4085ab07753aee4c1f09

------------------------------------ About Maker ---------------------------------

- Instagram: [https://www.instagram.com/happythingsmaker/](https://www.instagram.com/happythingsmaker/)
- Facebook: [https://www.facebook.com/happyThingsMaker/](https://www.facebook.com/happyThingsMaker/)
- Blog : [http://happyThingsMaker.com/](http://happyThingsMaker.com/)

---

# Instruction

## Preparing Materials

![](img/0.OverallParts.jpg)


download 3d modeling file from thingiverse
![](img/1.thingiverse.jpg)
https://www.thingiverse.com/thing:2742894



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
