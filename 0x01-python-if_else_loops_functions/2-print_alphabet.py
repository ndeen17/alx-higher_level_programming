#!/usr/bin/python3
# 2-print_alphabet.py

"""this Prints the alphabet in lowercase and is not followed by a new line."""
for letter in range(97, 123):
    print("{}".format(chr(letter)), end="")
