#include <HCSR04.h> // https://github.com/Martinsos/arduino-lib-hc-sr04
// alternative with one trigger & multiple echos in parallel: https://github.com/d03n3rfr1tz3/HC-SR04

#define TRIG D2
#define ECHO D1
// Initialize HC-SR04 ultrasonic distance sensor
UltraSonicDistanceSensor distanceSensor(TRIG, ECHO);


#include <TM1637TinyDisplay.h> // 4-digit 7-segment LCD display; https://github.com/jasonacox/TM1637TinyDisplay - see example TM1637Demo for animations and linked web tool for creating them.
// alternatives:
// https://github.com/bremme/arduino-tm1637 SevenSegmentTM1637 does not compile for arch ESP8266
// https://github.com/avishorp/TM1637 too basic, only has function to display decimal number, no scrolling text, animations etc.

#define CLK D5
#define DIO D6
// Initialize TM1637TinyDisplay - 4 Digit Display
TM1637TinyDisplay display(CLK, DIO);


void setup () {
    Serial.begin(9600);
    display.setBrightness(BRIGHT_4);
    display.showString("HELLO!");
    delay(500);
    display.clear();
}

int p;
int n;

void loop () {
    // Every 500 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    int d = distanceSensor.measureDistanceCm();
    Serial.println(d);
    // show on display or turn off if no change for >10 measurements
    if (d == p) n++;
    else n = 0;
    p = d;
    if (n > 10)
      display.clear();
    else
      display.showNumber(d);
    delay(500);
}
