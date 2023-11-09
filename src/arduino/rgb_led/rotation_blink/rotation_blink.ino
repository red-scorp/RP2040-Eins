/* @file rotation_blink
 * @brief Blink the RGB LED in rotation
 *
 * This program blinks the RGB LED in rotation.
 * The red LED is turned on for 1 second, then the green LED is turned on for 1 second, and then the blue LED is turned on for 1 second.
 * This process is repeated.
 *
 * @date 2021/01/23
 * @version 1.0.0
*/

#include <Arduino.h>

/* RGB LED pin numbers are defined in the rp2040 SDK as PIN_LED_R, PIN_LED_G and PIN_LED_B when you select RP2040-Eins as a target board */

#define BLINK_PERIOD 1000 // Blink period in milliseconds

void setup() {
  // Set the pin modes for the LEDs as outputs
  pinMode(PIN_LED_R, OUTPUT);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);
}

void loop() {
  // Turn on the red LED and turn off the others
  digitalWrite(PIN_LED_R, HIGH);
  digitalWrite(PIN_LED_G, LOW);
  digitalWrite(PIN_LED_B, LOW);

  // Wait for 1 second
  delay(BLINK_PERIOD);

  // Turn on the green LED and turn off the others
  digitalWrite(PIN_LED_R, LOW);
  digitalWrite(PIN_LED_G, HIGH);
  digitalWrite(PIN_LED_B, LOW);

  // Wait for 1 second
  delay(BLINK_PERIOD);

  // Turn on the blue LED and turn off the others
  digitalWrite(PIN_LED_R, LOW);
  digitalWrite(PIN_LED_G, LOW);
  digitalWrite(PIN_LED_B, HIGH);

  // Wait for 1 second
  delay(BLINK_PERIOD);
}
