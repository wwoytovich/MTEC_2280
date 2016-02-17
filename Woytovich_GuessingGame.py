import random
answer  = random.randint(0, 500)
humanInput = input("Enter a number between 0 and 500 ")
print("Your guess was " + humanInput)
print("The correct number was " + str(answer))