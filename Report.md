# Report

## Introduction
Our goal is to see how accurate photoresisting sensor is. How much error we have and what we can do to minimize it. 

## Table of Contents
- [Tools](#Tools)
  - [Used Hardware](#Used-Hardware)
  - [Used Software](#Used-Software)
  - [Sensor](#Sensor)
  - [Datasheets of the sensor](#Datasheets-of-the-sensor)
  - [Schematic and connections](#Schematic-and-connections)
- [Error analysis](#Error-analysis)
  - [Error sources](#Error-sources)
  - [Error avoiding](#Error-avoiding)
  - [Best guess of Error](#Best-guess-of-Error)
  - [Type-B uncertainty information](#Type-B-uncertainty-information)
  - [Type-A uncertainty experiments](#Type-A-uncertainty-experiments)
- [Linearization](#Linearization)
- [Revised learning objectives](#Revised-learning-objectives)
- [Summary of learning achievements](#Summary-of-learning-achievements)
- [Team](#Team)


## Tools

### Used Hardware

- Ai-thinker ESP-12K ESP32 S2 Version 08
- KY-018 Photoresistor
- Picoscope

### Used Software

- PicoScope 7
- Arduino IDE
- LTspice
- Matlab
- Coolexp Lux Meter

### Sensor

What sensor was experimented and required connections/schematic.

- The sensor experimented was a KY-018 photoresistor. 

### Datasheets of the sensor

[Photoconductive Cells](https://cdn-learn.adafruit.com/assets/assets/000/010/129/original/APP_PhotocellIntroduction.pdf)
[Selecting a Photocell](https://cdn-learn.adafruit.com/assets/assets/000/010/130/original/gde_photocellselecting.pdf)
[CdS Photoconductive Photocells](https://cdn-learn.adafruit.com/assets/assets/000/010/127/original/PDV-P8001.pdf)
[Photocells A 9950, A 7060, B 9060](https://cdn-learn.adafruit.com/assets/assets/000/010/128/original/DTS_A9950_A7060_B9060.pdf)
[PDV P8001](https://www.advancedphotonix.com/wp-content/uploads/2015/07/DS-PDV-P8001.pdf)

### Schematic and connections

<img src="/reportImages/esp32-schematic.png" width="321" height="561">
<img src="/reportImages/ESP32_photoresistor.jpg" width="240" height="320">

## Error analysis

### Error sources
Here are the things that might affect the data: Changes in the general luminocity in the room. Position of the sensor. The uncertainty of the sensor itself, including the age of the sensor. Methodology of the measurement, for example the number of samples. Temperature and humidity changes in the room. External electrical noise. User error.

### Error avoiding
To minimize these errors, ensuring proper calibration of equipment, minimizing external interferences, maintaining a consistent environment, and positioning the photoresistor appropriately for accurate lux measurements. Additionally, it is good to cross-validate measurements with other reliable lux measurement devices for confirmation.

### Best guess of Error
+- some lux

### Type-B uncertainty information

What sources of uncertainty were identified and what was found in data sheets.

There was no datasheet to be found which would tell anything about uncertainty. Some forum suggested that sensor itself might be 161 Adafruit sensor. But even for that sensor no uncertainty data can be found.

### Type-A uncertainty experiments

- When having constant signal input, what was the measured uncertainty (print values to terminal and import to MATLAB for analysis)
- The sensor was exposed to a constant light during the measurement. The analysis was done with MATLAB.
- Mean: 973
- Standard Deviation: 4.4893
- Standard Error: 0.86397


## Linearization

- The measurement for the linearization was done by slowly lifting a phone flashlight away from the photoresistor and a smartphone with a lux measurement application (Coolexp Lux Meter). The linearization uses the following function: "y = 3.817e+04exp(-0.005252x) + 574.2" <br>
<img src="/reportImages/Curve.png">

## Revised learning objectives

### How much focus spent on C language and controllers.
- Code was mainly done with arduino ide. It took few iterations but no more than 6 hours was used for the code.

### Repeatability
- We learned about repeatability that in real life right conditions are hard to create. In our case, measuring light might be problematic if the person near moves his head and light values change.

## Summary of learning achievements
During our project, we navigated a multitude of challenges and gained invaluable insights. We delved into the intricate world of hardware and software integration, exploring the interplay between various components like the Ai-thinker ESP32 S2, KY-018 Photoresistor, and Picoscope. Our foray into programming, particularly with Arduino IDE and MATLAB, honed our skills in code iteration and analysis.

One of the pivotal lessons learned revolved around the concept of repeatability. We encountered real-world complexities where creating consistent conditions for accurate measurements proved challenging. For instance, fluctuations in light intensity due to slight movements by individuals nearby emphasized the importance of accounting for environmental factors in sensor-based measurements.

Our experiments in Type-A uncertainty measurement, utilizing constant light input and subsequent MATLAB analysis, provided us with statistical metrics—mean, standard deviation, and standard error—vital for assessing sensor performance under stable conditions.


## Team
[Valtteri Äyräs](https://github.com/walterairs) / [Elmeri Anttila](https://github.com/elmerantil) / [Niklas Suvitie](https://github.com/niqdevgit)
