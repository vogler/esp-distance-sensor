# esp-distance-sensor
Ultrasonic distance sensor (HC-SR04) and LCD (TM1637) on a Wemos D1 mini

Install the following Arduino libraries:
- [HCSR04](https://github.com/Martinsos/arduino-lib-hc-sr04)
- [TM1637TinyDisplay](https://github.com/jasonacox/TM1637TinyDisplay)

Connect jumper wires on mini breadboard (both on 5V):
- HC-SR04: TRIG = D2, ECHO = D1
- TM1637: CLK = D5, DIO = D6

![image](https://user-images.githubusercontent.com/493741/158905022-e630a85b-c96c-48a4-bf7e-05835f2802c3.png)
![image](https://user-images.githubusercontent.com/493741/158905070-fe12307f-c9b0-4e82-b145-227535b9ba78.png)
![image](https://user-images.githubusercontent.com/493741/158905214-a718f023-bf45-4fd8-b416-b4149c7270d2.png)
