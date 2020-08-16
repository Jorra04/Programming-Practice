import random
import time

randomNumber = random.randint(1, 10)
tries = 0
flag = True
userName = input('Hello, What is Your Username? ')
print("Hello,", userName + ".")
question = input("Would you like to play my game? [Y/N]  ")
if question == "n" or question == "N" or question == "No" or question == "no":
    print("Ok, well the number would have been", randomNumber + ".")

if question == "y" or question == "Y" or question == "Yes" or question == "yes":
    print("Glad you decided to join!")
    Guess = int(input("What is the number i am thinking of between 1 & 10?  "))

    while tries < 10 and flag == True:
        if Guess > randomNumber:
            print("Your Guess is too high.\n")
            Guess = int(input("Please try again.\n  "))
            tries += 1
        if Guess < randomNumber:
            print("Your Guess is too low.\n")
            Guess = int(input("Please try again.\n  "))
            tries += 1

        if Guess == randomNumber:
            print("Congrats, you've won the game.")
            time.sleep(3)
            flag = False
        if tries == 10:
            print("You have surpassed the allotted number of Guesses, you have lost. The number was",
                  randomNumber + ".")
