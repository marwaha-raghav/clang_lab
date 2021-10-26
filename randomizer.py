# Online Python - IDE, Editor, Compiler, Interpreter
import random

num1 = 1100
num2 = 1120
step = 5

num3 = random.randint(num1, num2)

if num3 % 2 == 0:
    if num2 - num3 > 2* step:
        for i in range(1,step + 1):
            num3 = num3 + 2
            print("Code with Test Case Number:", num3)
        
    else:
        for i in range(1,step + 1):
            num3 = num3 - 2
            print("Code with Test Case Number:", num3)
else:
    num3 = num3 + 1
    if num2 - num3 > step:
        for i in range(1,step + 1):
            num3 = num3 + 2
            print("Code with Test Case Number:", num3)
        
    else:
        for i in range(1,step + 1):
            num3 = num3 - 2
            print("Code with Test Case Number:", num3)
    