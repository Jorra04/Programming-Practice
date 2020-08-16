import serial
import keyboard as kb

arduinoData = serial.Serial('com3', 9600, timeout=.1)




# def led_on():
#     arduinoData.write(b'1')


# def led_off():
#     arduinoData.write(b'0')

def turn_servo(val):
    arduinoData.write(str.encode(val))

while True:
    val = input("Enter angle:\n")
    arduinoData.write(val.encode())    
    # arduinoData.readline().decode("UTF-8")