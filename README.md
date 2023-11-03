# ESP32photoresistor

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
