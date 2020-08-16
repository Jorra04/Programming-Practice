#!/bin/bash
read n

sum=0

for((i=0;i<$n;i++))
do
    read num
    sum=$((sum+num))
done

echo The average of these values is: $((sum/n))

