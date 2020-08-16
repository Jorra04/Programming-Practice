print("Welcome to the bit conversion tool.")
x = int (input("How many numbers will you add?"))
myList = []
for i in range(x):
    y = int(input("please enter bit (1/0)"))
    assert y == 1 or y == 0
    myList.append(y)
print(myList)
