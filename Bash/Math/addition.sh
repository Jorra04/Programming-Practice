#!/bin/bash
if [$# != 2]
then
echo wrong number of arguments
exit
else
if [ ! -n $1] || [! -n $2]
then 
echo not valid numbers
exit
else
myvar = $1 + $2
echo $myvar
fi