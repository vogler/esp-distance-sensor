# esp-distance-sensor
Ultrasonic distance sensor (HC-SR04) and LCD (TM1637) on a Wemos D1 mini

Install the following Arduino libraries:
- [HCSR04](https://github.com/Martinsos/arduino-lib-hc-sr04)
- [TM1637TinyDisplay](https://github.com/jasonacox/TM1637TinyDisplay)

Connect jumper wires on mini breadboard (both on 5V):
- HC-SR04: TRIG = D2, ECHO = D1
- TM1637: CLK = D5, DIO = D6
