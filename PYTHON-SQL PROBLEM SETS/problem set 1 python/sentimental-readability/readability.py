# TODO
from cs50 import get_string
text = get_string("Text: ")
import string


num_words = 1
num_letters = 0
num_sentences = 0

for c in text:
    if c.isalpha():
        num_letters += 1
    elif c.isspace():
        num_words += 1
    elif c == "!" or c == "?" or c == ".":
        num_sentences += 1


result = round(0.0588 * (float(num_letters/num_words*100)) - 0.296 * (float(num_sentences/num_words*100)) - 15.8)

if result < 1:
    print("Before Grade 1")
elif result >= 16:
    print("Grade 16+")
else:
    print("Grade: ", result)


