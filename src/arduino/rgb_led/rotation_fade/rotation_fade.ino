/* @file rotation_fade
 * @brief Fade the RGB LED in rotation
 *
 * This program fades the RGB LED in rotation.
 * The red LED is fades on and then faded out, then the green LED is fades on and then faded out, and then the blue LED is fades on and then faded out.
 * This process is repeated.
 *
 * @date 2021/01/23
 * @version 1.0.0
 */

#include <Arduino.h>

/* RGB LED pin numbers are defined in the rp2040 SDK as PIN_LED_R, PIN_LED_G and PIN_LED_B when you select RP2040-Eins as a target board */

const int fadeDuration = 1000; // 1 second fade duration

void setup() {
  pinMode(PIN_LED_R, OUTPUT);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);
}

void loop() {
  fadeLED(PIN_LED_R);
  fadeLED(PIN_LED_G);
  fadeLED(PIN_LED_B);
}

void fadeLED(int pin) {
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(pin, brightness);
    delay(fadeDuration / 255);
  }

  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(pin, brightness);
    delay(fadeDuration / 255);
  }
}
