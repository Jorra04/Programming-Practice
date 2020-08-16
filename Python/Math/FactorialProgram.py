def Factorial(n):
    num = 1
    if n == 0:
        return 1
    elif n < 0:
        print("There is no factorial for negative numbers.")

    else:
        for i in range(n):
            num = num*n
            n -= 1
        return num


x = int(input("what factorial would you like to calculate  "))
print(Factorial(x))
