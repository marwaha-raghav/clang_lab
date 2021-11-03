import random

def randomTestCaseGenerator():
    number1 = 1100
    number2 = 1130
    step = 10
    number3 = random.randrange(number1, number2)
    choice = number3
    altchoice = choice
    alt2choice = choice
    print("debug", choice)
    if number3%2 == 0:
        if number2 - number3 >= step:
            for i in range(0, step):
                choice = choice + 2
                if choice <= number2:
                    print("Choose Test Case with number:", choice)
                if choice > number2:
                    altchoice = altchoice - 2
                    print("Choose Test case with number:", altchoice)
        else:
            for i in range(0,step):
                choice = choice - 2
                if choice >= number1:
                    print("Choose Test Case with number:", choice)
                if choice < number1:    
                    alt2choice = alt2choice + 2
                    print("Choose Test Case with number:",alt2choice)
    else:
        print("Debug: Odd Case")
        choice = choice + 1
        altchoice = altchoice + 1
        alt2choice = alt2choice + 1
        if number2 - number3 >= step:
            for i in range(0, step):
                choice = choice + 2
                if choice <= number2:
                    print("Choose Test Case with number:", choice)
                if choice > number2:
                    altchoice = altchoice - 2
                    print("Choose Test case with number:", altchoice)
        else:
            for i in range(0,step):
                choice = choice - 2
                if choice >= number1:
                    print("Choose Test Case with number:", choice)
                if choice < number1:    
                    alt2choice = alt2choice + 2
                    print("Choose Test Case with number:",alt2choice)

randomTestCaseGenerator()