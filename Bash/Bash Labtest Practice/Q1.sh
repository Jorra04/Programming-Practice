#!/bin/bash
count=0
while read -a namesArr
do
    if [ "${1// /}" = "${namesArr[0]// /}" ]
    then
        if [ ${#namesArr[@]} -eq 3 ]
        then
            storedName=${namesArr[1]}${namesArr[2]}
            while read -a coursesArr
            do
                foundName=${coursesArr[1]// /}${coursesArr[2]// /}
                if [ "$foundName" = $storedName ]
                then
                    count=$((count+1))
                fi
            done < "NameCourses.txt"
        elif [ ${#namesArr[@]} -eq 4 ]
        then
            storedName=${namesArr[1]// /}${namesArr[2]// /}${namesArr[3]// /}
            while read -a coursesArr
            do
                foundName=${coursesArr[1]// /}${coursesArr[2]// /}${coursesArr[3]// /}
                if [ "$foundName" = $storedName ]
                then
                    count=$((count+1))
                fi
            done < "NameCourses.txt"
        fi
    fi
done < "NameID.txt"

echo $count