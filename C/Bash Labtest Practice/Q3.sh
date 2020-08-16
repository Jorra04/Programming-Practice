#!/bin/bash
squaresChecker(){ #Bash reads line by line, so function has to be defined before it can be called.
    read x
    isHyp=false
    for((i=1;i<=$x;i++)) #Literally check every value.
    do
        for((j=1;j<=$x;j++))
        do
            if [ $(($((i * i)) + $((j * j)))) -eq  $((x*x))  ]
            then
                echo YES
                exit 1
            fi
        done
    done
    echo NO #will never reach this part if the program finds a solution. (Because of Exit 1)
}
if [ $# -ne 0 ]
then
    echo "No command arguments please"
    squaresChecker #Calls function.
else
    squaresChecker #Calls function.
fi