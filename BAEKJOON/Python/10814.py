n = int(input())
lst = []

for _ in range(n):
    age, name = map(str, input().split())
    age = int(age)
    lst.append((age, name))

lst.sort(key = lambda std:std[0])

for std in lst:
    print(std[0], std[1])