#!/usr/bin/python3
# 7-islower.py


def islower(c):
    """this checks for the lowercase characters."""
    if ord(c) >= 97 and ord(c) <= 122:
        return True
    else:
        return False

