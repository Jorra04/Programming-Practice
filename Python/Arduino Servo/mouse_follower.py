import tkinter as tk
import serial

root = tk.Tk()
root.geometry("1000x1000")
var = ''

arduinoData = serial.Serial('com3', 9600, timeout=.1)

def turn_servo(val):
    arduinoData.write(str.encode(val))


def motion(event):
    x, y = 180-int(event.x /(1000/180)), 90-int(event.y /(1000/90))
    var = "X"+str(x) + "Y" +str(y)

    # print(var)
    arduinoData.write(var.encode())    
    print(arduinoData.readline().decode("UTF-8"))

root.bind('<Motion>', motion)
root.mainloop()


