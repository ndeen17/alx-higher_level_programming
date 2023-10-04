#!/usr/bin/python3
# 100-print_tebahpla.py

"""" this prints the alphabet in reverse order alternating upper- and lower-case."""
l = 0
for c in range(ord('z'), ord('a') - 1, -1):
    print("{}".format(chr(c - l)), end="")
    l = 32 if l == 0 else 0
