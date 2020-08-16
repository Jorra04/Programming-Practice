#!/bin/bash
if [ $# != 1 ]
then
echo wrong number of arguments.
exit 1

fi
if [ $1 -lt 0 ] || [ $1 = -0 ]
then
    #no factorial for neg numbers
    echo no negatives
    exit
fi
if [ $1 = 0 ] || [ $1 = +0 ]
then
    #0! is 1.
    echo 1
    exit
fi
a=$1
for(( i=1; i<$1; i++ ))
do
    b=$(( $1 - $i ))
    # echo $b
    a=$(( $a*$b ))


done
echo $a