# Sneaky Buttons

FRC team the Sneaky Snakes' custom button panel code for DESTINATION : DEEP SPACE.

# Cloning this repository 

First, you have to download and install Git Bash into your device.
You can download Git Bash from here : [Git Bash]([https://git-scm.com/downloads](https://git-scm.com/downloads))


After downloading and installing the Git Bash into your device, you have to open [this repository]([https://github.com/sneakysnakesfrc/sneaky-buttons](https://github.com/sneakysnakesfrc/sneaky-buttons)) in your browser and copy the clone URL.

Then open the Git Bash, go to the directory which you want to clone the repository and type that command.

```
  $ git clone https://github.com/sneakysnakesfrc/sneaky-buttons.git
  ```

## Uploading the program into controller

First of all, you have to use **Arduino Leonardo** or **Arduino Pro Micro** to run this program.
After cloning the code into your device, install Arduino IDE from [here](https://www.arduino.cc/en/Main/Software).
After installing the Arduino IDE, go to **CustomButtonPanel/main** and open **main.ino** with Arduino IDE.

Follow this steps to upload the program into your controller:
1.  Connect your Arduino using the USB cable.
    
    The micro-usb end of the USB cable connects to your Arduino and the flat end connects to a USB port on your computer.
    
2.  Choose Tools→Board→Arduino Leonardo/Pro Micro to find your board in the Arduino menu.
    
    You can also find all boards through this menu, such as the Arduino MEGA 2560 and Arduino Uno.
    
3.  Choose the correct serial port for your board.
    
    You find a list of all the available serial ports by choosing Tools→Serial Port→ comX or /dev/tty.usbmodemXXXXX. X marks a sequentially or randomly assigned number. In Windows, if you have just connected your Arduino, the COM port will normally be the highest number, such as com 3 or com 15.
    
    Many devices can be listed on the COM port list, and if you plug in multiple Arduinos, each one will be assigned a new number. On Mac OS X, the /dev/tty.usbmodem number will be randomly assigned and can vary in length, such as /dev/tty.usbmodem1421 or /dev/tty.usbmodem262471. Unless you have another Arduino connected, it should be the only one visible.
    
4.  Click the Upload button.
    
    This is the button that points to the right in the Arduino environment. You can also use the keyboard shortcut Ctrl+U for Windows or Cmd+U for Mac OS X.
    
##
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)
[![Language: C++](https://img.shields.io/badge/Language-C++-ff69b4.svg)](https://www.java.com/en/)
