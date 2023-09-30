# USB/UART Interface Development Board

## Project goal
USB demonstrator will serve as a development platform for the creation of a standard USB
interface for sending and receiving data from ECUs.

In the end, the developed USB_Debug SW module should serve as a framework for
integrating simple USB and/or UART communication into my projects to assist during the
development phase.

## HW
The intention is to develop the interface to be used with HAL (STM). However, I will attempt
to separate the target-specific implementation as much as possible from the logic of the interface.

Board offers:
--------------
- 3 LEDs for debugging purposes
- UART Interface
- Debug/programming interface
- USB Interface 
- STM32F042f4Px as uC of choice
- switch for selecting the power source UART / USB (to prevent issues if both connected at once)

## Current Status
HW design is completed and should be sufficient to begin the development. 
There are a few other development modules I plan to prepare and order at once to save on postage.

