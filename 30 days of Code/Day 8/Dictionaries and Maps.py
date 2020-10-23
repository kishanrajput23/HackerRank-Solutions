n = int(input())
phone_book = dict(input().split() for _ in range(n))
while True:
    try:
        name = input()
        if name in phone_book:
            print("%s=%s" % (name, phone_book[name]))
        else:
            print("Not found")
    except EOFError:
        break
