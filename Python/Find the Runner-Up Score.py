n = int(input())

nums = map(int, input().split())    
print(sorted(list(set(nums)))[-2])
