#!/bin/python3

import sys


S = input()
try:
    i = int(S)
    print(i)
except ValueError:
    print("Bad String")
