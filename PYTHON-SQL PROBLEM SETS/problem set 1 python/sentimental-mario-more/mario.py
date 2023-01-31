# TODO
from cs50 import get_int
height = get_int("Height: ")
i = 0
while i <= height:
    counter = height - 1
    print(" " * counter + "#" * i + " " + "#" * i)
    print()
    i += 1
    counter -= 1


