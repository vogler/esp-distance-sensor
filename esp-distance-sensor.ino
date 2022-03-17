// https://github.com/Martinsos/arduino-lib-hc-sr04/blob/master/examples/simple/simple.ino
#include <HCSR04.h> // https://github.com/Martinsos/arduino-lib-hc-sr04
// alternative with one trigger & multiple echos in parallel: https://github.com/d03n3rfr1tz3/HC-SR04

UltraSonicDistanceSensor distanceSensor(13, 12);  // Initialize sensor that uses digital pins 13 and 12.

void setup () {
    Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.
}

void loop () {
    // Every 500 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    Serial.println(distanceSensor.measureDistanceCm());
    delay(500);
}
