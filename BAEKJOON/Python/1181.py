lst = []
n = int(input())
for i in range(0, n):
    temp = input()
    lst.append(temp)
lst = set(lst)
lst = sorted(lst, key = lambda x:(len(x), x))
for word in lst:
    print(word)