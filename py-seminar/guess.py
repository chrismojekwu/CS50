import random

# defining hame into function
def game():
    answer = random.randint(1,10)
    result = False

    for i in range(3):
        user = int(input("Guess a number between 1 & 10: "))
        if user == answer:
            print("Correct!")
            result = True
            break
        else:
            print("Wrong!")

    if result == True:
        print("Good Job!")
    else:
        print("Better luck next time!")

# call game function
game()


# could have used comparison to help user guess the answer

