

try:
    number1 = int(input('Number1: '))
    if number1 < 1 or number1 > 10:
        raise ValueError

except ValueError:
    pass
print("Hi")
