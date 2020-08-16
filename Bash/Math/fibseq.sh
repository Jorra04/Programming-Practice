#!/bin/bash
#making a fib seq program in bash.
#example code showing how to run a for loop.
# for(( i=0; i<$1; i++ ))
# do
#     echo this is itteration $i
# done 



if [ "$#" != 1 ]
then
    echo The number of arguments is inconsistent with the fibonacci calculator.
    exit 1
fi

echo Welcome to my fibonacci sequence application. I see the number you\'ve chosen is $1


if [ "$1" = 1 ]
then
    fibseq=(0)
    echo ${fibseq[@]}
    exit 1

elif [ "$1" = 2 ]
then
    fibseq=(0 1)
    echo ${fibseq[@]}
    exit 1
else

fibseq=(0 1)
for(( i=2; i<$1; i++ ))
do
    a="${fibseq[$i-1]}"
    b="${fibseq[$i-2]}"
    fibseq[$i]=$(( $a+$b ))
    
   
done

fi

echo ${fibseq[@]}