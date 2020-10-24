#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the factorial function below
n = int(input())
factorial = 1
for i in range(1, n+1):
    factorial = factorial * i
print(factorial)
