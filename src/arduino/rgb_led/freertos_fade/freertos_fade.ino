/* @file freertos_fade.ino
 * @brief Fade the RGB LED in rotation using FreeRTOS
 *
 * This program fades the RGB LED in rotation using FreeRTOS.
 * The red LED is fades on and then faded out, the green LED is fades on and then faded out, and the blue LED is fades on and then faded out.
 * All of these are done in parallel using several FreeRTOS tasks.
 * This process is repeated.
 *
 * @date 2021/01/23
 * @version 1.0.0
 */

#include <Arduino.h>

#include <RP2040_FreeRTOS.h.h>
#include <task.h>

/* RGB LED pin numbers are defined in the rp2040 SDK as PIN_LED_R, PIN_LED_G and PIN_LED_B when you select RP2040-Eins as a target board */

// Define fade durations (in seconds)
const int FADE_DURATION_R = 1;
const int FADE_DURATION_G = 3;
const int FADE_DURATION_B = 5;

void setup() {
  // Initialize LED pins as outputs
  pinMode(PIN_LED_R, OUTPUT);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);

  // Create FreeRTOS tasks for fading each LED
  xTaskCreate(fadeRedLED, "Fade Red LED", 128, NULL, 1, NULL);
  xTaskCreate(fadeGreenLED, "Fade Green LED", 128, NULL, 1, NULL);
  xTaskCreate(fadeBlueLED, "Fade Blue LED", 128, NULL, 1, NULL);

  // Start the FreeRTOS scheduler
  vTaskStartScheduler();
}

void loop() {
  // Nothing to do in loop() as the FreeRTOS tasks will handle the LED fading
}

void fadeRedLED(void *pvParameters) {
  while (true) {
    // Fade red LED up
    for (int brightness = 0; brightness <= 255; brightness++) {
      analogWrite(PIN_LED_R, brightness);
      vTaskDelay(FADE_DURATION_R * 1000 / 255);
    }

    // Fade red LED down
    for (int brightness = 255; brightness >= 0; brightness--) {
      analogWrite(PIN_LED_R, brightness);
      vTaskDelay(FADE_DURATION_R * 1000 / 255);
    }
  }
}

void fadeGreenLED(void *pvParameters) {
  while (true) {
    // Fade green LED up
    for (int brightness = 0; brightness <= 255; brightness++) {
      analogWrite(PIN_LED_G, brightness);
      vTaskDelay(FADE_DURATION_G * 1000 / 255);
    }

    // Fade green LED down
    for (int brightness = 255; brightness >= 0; brightness--) {
      analogWrite(PIN_LED_G, brightness);
      vTaskDelay(FADE_DURATION_G * 1000 / 255);
    }
  }
}

void fadeBlueLED(void *pvParameters) {
  while (true) {
    // Fade blue LED up
    for (int brightness = 0; brightness <= 255; brightness++) {
      analogWrite(PIN_LED_B, brightness);
      vTaskDelay(FADE_DURATION_B * 1000 / 255);
    }

    // Fade blue LED down
    for (int brightness = 255; brightness >= 0; brightness--) {
      analogWrite(PIN_LED_B, brightness);
      vTaskDelay(FADE_DURATION_B * 1000 / 255);
    }
  }
}