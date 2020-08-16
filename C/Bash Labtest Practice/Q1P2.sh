#!/bin/bash
count=0
while read ID name
do
    if [ "${1// /}" = "${ID// /}" ]
    then
        storedName=$name
        while read ID2 name
        do
            if [ "$name" = "$storedName" ]
            then
                count=$((count+1))
            fi
        done < "NameCourses.txt"
    fi
done < "NameID.txt"
echo $count