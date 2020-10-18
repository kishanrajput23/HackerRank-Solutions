#!/bin/python3

import math
import os
import random
import re
import sys
n = int(input())
if n % 2 != 0:
    print("Weird")
elif n % 2 == 0 and 2 < n <= 6:
    print("Not Weird")
elif n % 2 == 0 and 6 < n <= 20:
    print("Weird")
elif n % 2 == 0 and n > 20:
    print("Not Weird")



    

