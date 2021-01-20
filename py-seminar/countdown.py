#count = int(10)

#while count > 0:
 #   print(count)
 #   count = count - 1

#print("Happy New Year!")

import time
import random

#defining functions in python
def main():
    number = random.randint(5, 15)
    countdown(number)
    print("Happy New Year!")

def countdown(n):
    for i in range(n):
        print(n - i)
        time.sleep(.5)

#dont forget to call functions!
main()
