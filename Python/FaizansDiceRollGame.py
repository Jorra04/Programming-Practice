tries= 0
import random
import time
while tries < 5:
    
    print("This is a dice rolling program")
    print("press enter to roll")
    input()
    tries +=1
    number=random.randint(1,6)
    if number==1:
        print("[---------------]")
        print("[               ]")
        print("[       O       ]")
        print("[               ]")
        print("[---------------]")
    if number==2:
        print("[---------------]")
        print("[               ]")
        print("[   O       O   ]")
        print("[               ]")
        print("[---------------]")
    if number==3:
        print("[---------------]")
        print("[     O     O   ]")
        print("[        O      ]")
        print("[               ]")
        print("[---------------]")
    if number==4:
        print("[---------------]")
        print("[     O     O   ]")
        print("[     O     O   ]")
        print("[               ]")
        print("[---------------]")
    if number==5:
        print("[---------------]")
        print("[     O     O   ]")
        print("[        O      ]")
        print("[     O     O   ]")
        print("[---------------]")
    if number==6:
        print("[---------------]")
        print("[     O     O   ]")
        print("[     O     O   ]")
        print("[     O     O   ]")
        print("[---------------]")
print('Thank you for playing my game!')
time.sleep(3)
    
