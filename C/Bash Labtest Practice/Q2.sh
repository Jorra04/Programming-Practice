#!/bin/bash
unsorted=true #Checker.
while [ "$unsorted" = "true" ]
do
    read x y z #reads three inputs in one line.
    if [ $x -lt $y ] && [ $y -lt $z ]
    then
        echo $y
        unsorted=false
    else
        echo no
    fi
done