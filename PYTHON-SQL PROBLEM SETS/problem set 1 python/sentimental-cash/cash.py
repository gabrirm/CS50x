# TODO
from cs50 import get_float
while True:
    change = get_float("Change owed: ")
    if change <= 0:
        change = get_float("Change owed: ")
    break

cents = round(change * 100)
q = int(cents / 25)
d = int((cents % 25) / 10)
n = int(((cents % 25) % 10) / 5)
p = int(((cents % 25) % 10) % 5)

result = q + d + n + p
print(result)




