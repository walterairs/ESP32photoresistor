# ESP32photoresistor


# Used Hardware

-         Ai-thinker ESP-12K ESP32 S2 Version 08
-         KY-018 Photoresistor
-         Picoscope

# Used Software

-         PicoScope 7
-         Arduino IDE
-         LTspice
-         

# Revised learning objectives

-        How much focus spent on C language and controllers.

-        Repeatability

# Sensor

-        What sensor was experimented and required connections/schematic.

-        The sensor experimented was a KY-018 photoresistor. 

# Type-B uncertainty information

-        What sources of uncertainty were identified and what was found in data sheets.

# Type-A uncertainty experiments

-        When having constant signal input, what was the measured uncertainty (print values to terminal and import to MATLAB for analysis)

# Constant rate sampling

-        Timer based triggering of AD conversion.

-        Jitter analysis (use GPIO pins to signal start of conversion and picoscope to see timings.)

# Digital filter testing

-        Report testing digital filters for measured data (use online design tool and copypaste filter code). Use GPIO pins to indicate start and end of filter calculation and check timing with picoscope.

# Summary

## HOXHOX

In order to capture data from the COM dedicated for the ESP32 device, you need to shut down the arduino IDE application. The COM could be preserved for one application to listen at a time.
To use the python environment, IT HAS TO BE AT THE PROJECT ROOT DIR. = open /analysis as a new vscode window.

### general bash commands to use

pulling the repository the first time

```bash
git clone https://github.com/walterairs/ESP32photoresistor.git
```

creating and activating the virtual environment

```bash
python3 -m venv .venv
source .venv/Scripts/activate
```

Installing the requirements to the <b>ACTIVE</b> virtual environment.

```bash
pip install -r requirements.txt
```

when you have installed some packets that are not added into the requirements file:

```bash
pip freeze > requirements.txt
```
