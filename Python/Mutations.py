def mutate_string(string, position, character):
    l = list(string)
    l[position] = character
    string = "".join(l)
    mutate_string = string
    return mutate_string
if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)