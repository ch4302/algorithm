lst = list(map(int, input().split()))

for i in range(0, 2):
    for j in range(i, 3):
        if lst[i] > lst[j] :
            temp = lst[i]
            lst[i] = lst[j]
            lst[j] = temp
    
for i in lst:
    print(i, end = ' ')