operand = input("Enter the operation you would like to perform (+ or - or * or  % or divison: ")
numA = input("Enter the first number: ")
numB = input("Enter the second number: ")
print("The answer is: ")
if(operand == "+"):
	print(int(numA)+int(numB))
elif(operand == "-"):
	print(int(numA) - int(numB))
elif(operand == "*"):
	print(int(numA) * int(numB))
elif(operand == "%"):
	print(int(numA) % int(numB))
elif(operand == "/"):
	print(int(numA) / int(numB))