'''
Script turns on an LED light connected to Arduino
pin 3, for 3 seconds
'''

import serial

# Connect Arduino to Pi
ser = serial.Serial('/dev/ttyACM0', 9600)

# Turn on LED (pin 3)
ser.write('3')