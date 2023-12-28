/**
 * @file rotation_fade2.ino
 * @brief Fade the RGB LED in rotation
 *
 * This program fades the RGB LED in rotation.
 * The LED is fades from red to green, then from green to blue, and then from blue to red.
 * This process is repeated.
 *
 * @date 2023/12/28
 * @version 1.0.0
 */

#include <Arduino.h>

/* RGB LED pin numbers are defined in the rp2040 SDK as PIN_LED_R, PIN_LED_G and PIN_LED_B when you select RP2040-Eins as a target board */

const int fadeDuration = 1000; // 1 second fade duration

void setup() {
  // Set the pin modes for the LEDs as outputs
  pinMode(PIN_LED_R, OUTPUT);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);
}

void loop() {
  // Rotate the fade colors
  fadeLED(PIN_LED_R, PIN_LED_G);
  fadeLED(PIN_LED_G, PIN_LED_B);
  fadeLED(PIN_LED_B, PIN_LED_R);
}

void fadeLED(int fromPin, int toPin) {
  // Fade on LED on and fade another LED off
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(fromPin, 255 - brightness);
    analogWrite(toPin, brightness);
    delay(fadeDuration / 255);
  }
}