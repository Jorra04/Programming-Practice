#Space Invaders!!!!
#Set up Screen.
#Python 3.7 - Windows.

import turtle
import os

# Setting up the Screen

wn = turtle.Screen()
wn.bgcolor("black")
wn.title("Space Invaders")



#Draw Border

border_pen = turtle.Turtle()
border_pen.speed(0)
border_pen.color("white")
border_pen.penup()
border_pen.setposition(-300,-300)
border_pen.pendown()
border_pen.pensize(3)
for side in range(4):
    border_pen.fd(600)
    border_pen.lt(90)
border_pen.hideturtle()

#Creating Player Turtle

player = turtle.Turtle()
player.color("blue")
player.shape("triangle")
player.penup()
player.speed(0)
player.setposition(0,-250)
player.setheading(90)






delay = input("Press Enter to End Game")
