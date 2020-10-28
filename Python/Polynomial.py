import numpy
P = list(map(float,input().split(" ")))
x = int(input())
print(numpy.polyval(P,x))
