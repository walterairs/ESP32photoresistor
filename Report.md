# Report
## Table of Contents
- [Used Hardware](#Used-Hardware)
- [Another Section](#Used-Software)
- [Revised learning objectives](#Revised-learning-objectives)
- [Sensor](#Sensor)

- [Schematic and connections](#Schematic-and-connections)
- [Linearization](#Linearization)
- [Type-B uncertainty information](#Type-B-uncertainty-information)
- [Type-A uncertainty experiments](#Type-A-uncertainty-experiments)
- [Constant rate sampling](#Constant-rate-sampling)
- [Digital filter testing](#Digital-filter-testing)
- [Summary of learning achievements](#Summary-of-learning-achievements)
- [Team](#Team)



## Used Hardware

- Ai-thinker ESP-12K ESP32 S2 Version 08
- KY-018 Photoresistor
- Picoscope

## Used Software

- PicoScope 7
- Arduino IDE
- LTspice
- Matlab
- Coolexp Lux Meter

## Revised learning objectives

### How much focus spent on C language and controllers.
- Code was mainly done with arduino ide. It took few iterations but no more than 6 hours was used for the code.

### Repeatability
- We learned about repeatability that in real life right conditions are hard to create. In our case, measuring light might be problematic if the person near moves his head and light values change.

## Sensor

What sensor was experimented and required connections/schematic.

- The sensor experimented was a KY-018 photoresistor. 

## Schematic and connections

<img src="/reportImages/esp32-schematic.png" width="321" height="561">
<img src="/reportImages/ESP32_photoresistor.jpg" width="240" height="320">

## Linearization

- The measurement for the linearization was done by slowly lifting a phone flashlight away from the photoresistor and a smartphone with a lux measurement application (Coolexp Lux Meter). The linearization uses the following function: "y = 3.817e+04exp(-0.005252x) + 574.2" <br>
<img src="/reportImages/Curve.png">

## Type-B uncertainty information

What sources of uncertainty were identified and what was found in data sheets.

There was no datasheet to be found which would tell anything about uncertainty. Some forum suggested that sensor itself might be 161 Adafruit sensor. But even for that sensor no uncertainty data can be found.

## Type-A uncertainty experiments

- When having constant signal input, what was the measured uncertainty (print values to terminal and import to MATLAB for analysis)
- The sensor was exposed to a constant light during the measurement. The analysis was done with MATLAB.
- Mean: 973
- Standard Deviation: 4.4893
- Standard Error: 0.86397

## Constant rate sampling

- Timer based triggering of AD conversion.

- Jitter analysis (use GPIO pins to signal start of conversion and picoscope to see timings.)

## Digital filter testing

- Report testing digital filters for measured data (use online design tool and copypaste filter code). Use GPIO pins to indicate start and end of filter calculation and check timing with picoscope.

## Summary of learning achievements

## Team
[Valtteri Äyräs](https://github.com/walterairs)
[Elmeri Anttila](https://github.com/elmerantil)
[Niklas Suvitie](https://github.com/niqdevgit)
