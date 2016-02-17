import random
answer  = random.randint(0, 500)
# answer = 45 #needed if you want to try the win condition properly.
humanInput = input("Enter a number between 0 and 500: ")
if(humanInput == str(answer)):
	print("You Win")
else:
	print("You lost the game, and you lost the game.")
print("Your guess was " + humanInput)
print("The correct number was " + str(answer))
