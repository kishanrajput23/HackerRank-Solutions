import collections
X = int(input())
Y = collections.Counter(map(int, input().split()))
N = int(input())
money_earned = 0
for i in range(N):
    size, price = map(int, input().split())
    if Y[size]:
        money_earned += price
        Y[size] -= 1
print(money_earned)



