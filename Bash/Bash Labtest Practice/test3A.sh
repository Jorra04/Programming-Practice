#!/bin/bash
checker=true #so it'll enter

while [ $checker = true ] #check if they're equal, goes through txt file
do
    read var
    checker=false #catches if never enters.
    while read -a arr
    do
        if [ ${arr[0]} = $var ]
        then
            checker=true
            if [ ${arr[1]} -gt ${arr[2]} ]
            then
                echo "${arr[1]}"

            elif [ ${arr[1]} -lt ${arr[2]} ]
            then
                echo "${arr[2]}"
            else
                echo "${arr[2]}"
            fi
        fi
    done < "test3sheet.txt"
done