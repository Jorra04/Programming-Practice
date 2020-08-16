import cv2
import serial
face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
var = ''
arduinoData = serial.Serial('com5', 9600, timeout=.1)

cap = cv2.VideoCapture(0)
cap.set(3,1000)
cap.set(4,1000)
servoX = 0
servoY = 0
while True:
    _, img = cap.read()
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

    faces = face_cascade.detectMultiScale(gray, 2, 4)

    
    for (x,y,w,h) in faces:
        cv2.rectangle(img, (x,y), (x+w, y+h), (255,0,0), 2)
        servoX, servoY = 180-int(x /(750/180)), 90-int(y /(400/90))
        var = "X"+str(servoX) + "Y" +str(servoY)

        arduinoData.write(var.encode())    
        print(arduinoData.readline().decode("UTF-8"))
        
    cv2.imshow('img', img)
    
    k = cv2.waitKey(30) & 0xff

    if k == 27:
        break
cap.release()