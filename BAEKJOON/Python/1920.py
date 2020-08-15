n = int(input())
lst = set(map(int, input().split()))
m = int(input())
lst_t = list(map(int, input().split()))
for i in lst_t:
    if i in lst:
        print(1)
    else:
        print(0)