```
 ______    _______  _______  _______  _   ___  _______         _______  ___   __    _  _______ 
|    _ |  |       ||       ||  _    || | |   ||  _    |       |       ||   | |  |  | ||       |
|   | ||  |    _  ||____   || | |   || |_|   || | |   | ____  |    ___||   | |   |_| ||  _____|
|   |_||_ |   |_| | ____|  || | |   ||       || | |   ||____| |   |___ |   | |       || |_____ 
|    __  ||    ___|| ______|| |_|   ||___    || |_|   |       |    ___||   | |  _    ||_____  |
|   |  | ||   |    | |_____ |       |    |   ||       |       |   |___ |   | | | |   | _____| |
|___|  |_||___|    |_______||_______|    |___||_______|       |_______||___| |_|  |__||_______|
```

# RP2040-Eins Project

The **RP2040-Eins** project aims to create a replacement for the Arduino UNO R3 or Arduino M0 using the RP2040 MCU.

## RP2040-Eins Board

The **RP2040-Eins** board is a 4-layer design intended to accommodate the popular Raspberry Pi RP2040 MCU within the standard Arduino UNO R3 footprint.

This board is crafted in Germany, and its name, "RP2040-Eins", incorporates the German word "Eins" (pronounced as "eye-ns"), which translates to "one". This name choice reflects the use of the same form-factor as the Arduino "Uno", which means "one" in Italian.

Preview:

![RP2040-Eins Front preview](img/Front.png)
![RP2040-Eins Back preview](img/Back.png)
![RP2040-Eins Side View preview](img/SideView.png)

You can view the [Schematics in PDF format](doc/RP2040-Eins.pdf) for detailed information.

STEP 3D file is available [with pins](doc/RP2040-Eins.step).

Features:

- Arduino UNO compatible pinout
- Partially compatible with Arduino Nano RP2040 Connect pinout
- Dual-core Cortex-M0+ Raspberry Pi RP2040
- 21 GPIO pins, including 4 analog inputs
- USB Type-C connector
- JTAG debugging connector
- LDO-based 5V and 3.3V power supply with a maximum 12V input
- Supports both SOIC and WSON 16MB flash packages
- Includes power, user and RGB LEDs

CAM files, as well as the BOM and CPL files for JLCPCB, are available.

### Board Pinout

Following pinout is used for the board:

| Board Pin | RP2040 Pin | Function | Notes |
| --------- | ---------- | -------- | ----- |
| D0        | GPIO1      | UART0 TX |       |
| D1        | GPIO0      | UART0 RX |       |
| D2        | GPIO25     |          |       |
| D3        | GPIO15     |          |       |
| D4        | GPIO16     |          |       |
| D5        | GPIO17     |          |       |
| D6        | GPIO18     |          |       |
| D7        | GPIO19     |          |       |
| D8        | GPIO20     |          |       |
| D9        | GPIO21     |          |       |
| D10       | GPIO5      | SS       |       |
| D11       | GPIO7      | MOSI     |       |
| D12       | GPIO4      | MISO     |       |
| D13       | GPIO6      | SCK      |       |
| D14 A0    | GPIO26     |          |       |
| D15 A1    | GPIO27     |          |       |
| D16 A2    | GPIO28     |          |       |
| D17 A3    | GPIO29     |          |       |
| D18       | GPIO12     | SDA      |       |
| D19       | GPIO13     | SCL      |       |
| D20       | GPIO22     |          |       |
| D21       | GPIO23     |          |       |
| LED_R     | GPIO9      |          |       |
| LED_G     | GPIO10     |          |       |
| LED_B     | GPIO11     |          |       |

## Version History

This board exists in a single LDO-based flavor. If you want to use a Buck-based version of this board, please contact me directly.

### v1.0b4

![v1.0b4 board preview](img/v1.0b4.png)

Last testing release.

- Fixed SPI connector pins layout
- Renamed Arduino pins as Dxx an added GPIO pin names at the back as Gxx

### v1.0b3

![v1.0b3 board preview](img/v1.0b3.png)

Third testing release.

- Moved BOOTSEL button to the edge of the board for easier access when shield is attached.
- Moved QSPI flash closer to the MCU.
- Added Arduino code examples for RGB LED.
- Rearranged routing of several lines.
- Added fancy board name label.
- Added white silkscreen under the LEDs to add light reflection.
- Moved text on the back of the board a bit.
- Removed pull-up resistor from SWCLK line.

### v1.0b2

![v1.0b2 board preview](img/v1.0b2.png)

Second testing release.

- Added MOSFETs for RGB LED to make it work similarly to user LED.
- Moved few components around.
- Added QR code to the back of the board.

### v1.0b1

![v1.0b1 board preview](img/v1.0b1.png)

Initial release for testing purposes.

## Code Examples

Following code examples are available:

Only Adruino SDK:
- ``src/arduino/rgb_led/rotation_blink.ino`` - blinks RGB LED in rotation individually
- ``src/arduino/rgb_led/rotation_fade.ino`` - fades RGB LED in rotation individually
- ``src/arduino/rgb_led/rotation_fade2.ino`` - fades RGB LED in rotation from one color to another

Arduino SDK with FreeRTOS:
- ``src/arduino/rgb_led/freertos_fade.ino`` - fades RGB LED in rotation individually using FreeRTOS

Please use latest official version of [earlephilhower/arduino-pico](https://github.com/earlephilhower/arduino-pico) and select "RP2040-Eins" board as a target.

## Links

- [Raspberry Pi RP2040 information page](https://www.raspberrypi.com/documentation/microcontrollers/rp2040.html).
- [Arduino UNO R3 information page](https://docs.arduino.cc/retired/boards/arduino-uno-rev3-with-long-pins).
- [Arduino SDK for RP2040 board](https://github.com/earlephilhower/arduino-pico).

## How to Help

Your contributions as code, resources, or finances are welcome! Please contact me directly via email at andriy.golovnya@gmail.com or through my [GitHub profile](https://github.com/red-scorp).

If you'd like to make a financial contribution, you can donate via [PayPal](http://paypal.me/redscorp) or [Ko-Fi](http://ko-fi.com/redscorp). Your support is greatly appreciated.

Thanks in advance!