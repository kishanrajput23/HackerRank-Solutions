#!/bin/python3

import math
import os
import random
import re
import sys

print(len(max(bin(int(input().strip()))[2:].split('0'))))