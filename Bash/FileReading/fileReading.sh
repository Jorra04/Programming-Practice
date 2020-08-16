#!/bin/bash
text="hello.txt"
count=0
while read -a arr
do
    temp="${arr[@]}"
    temp=${temp// /}
    echo $temp
    for((i = 0; i < ${#arr[@]}; i ++))
    do
        if [ "$1" = ${arr[i]} ]
        then
            count=$((count+1))
        fi
    done
done < $text

echo $count
