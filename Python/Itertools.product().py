from itertools import product
A = map(int, input().split())
B = map(int, input().split())
res = product(A, B)
print(*res)
