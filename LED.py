# Program turns an LED on and off, which is connected to a Rasperberry Pi
# using terminal commands

# start python as a super user
sudeo python

# import GPIO library
import RPi.GPIO as GPIO

# set GPIO mode to broadcomm
GPIO.setmode(GPIO.BCM)

# set pin 18 as output
GPIO.setup(18, GPIO.out)

# turn LED on
GPIO.output(18, True)

# turn LED off
GPIO.output(18, False)

