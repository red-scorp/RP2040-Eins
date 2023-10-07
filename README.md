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

The RP2040-Eins project aims to create a replacement for the Arduino UNO R3 using the RP2040 MCU.

## RP2040-Eins Board

The **RP2040-Eins** board is a 4-layer board designed to accommodate the popular Raspberry Pi RP2040 MCU in the commonly used, but obsolete, Arduino UNO R3 footprint.

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
- Supports both SOIC and WSON flash packages
- Power, user and RGB LEDs

CAM files, as well as the BOM and CPL files for JLCPCB, are available.

## Version History

### v1.0b1

![v1.0b1 board preview](img/v1.0b1.png)

Initial release for testing purposes.

## Links

- [Raspberry Pi RP2040 information page](https://www.raspberrypi.com/documentation/microcontrollers/rp2040.html).
- [Arduino UNO R3 information page](https://docs.arduino.cc/retired/boards/arduino-uno-rev3-with-long-pins).
- [Arduino SDK for RP2040 board](https://github.com/earlephilhower/arduino-pico).

## How to Help

Your contributions as code, resources, or finances are welcome! Please contact me directly via email at andriy.golovnya@gmail.com or through my [GitHub profile](https://github.com/red-scorp).

If you'd like to make a financial contribution, you can donate via [PayPal](http://paypal.me/redscorp) or [Ko-Fi](http://ko-fi.com/redscorp). Your support is greatly appreciated.

Thanks in advance!