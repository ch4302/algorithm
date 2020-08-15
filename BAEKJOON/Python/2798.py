n, m = map(int, input().split())
lst = list(map(int, input().split()))

sum_lst = 0
for i in range(0, len(lst) - 2):
    for j in range(i + 1, len(lst) - 1):
        for k in range(j + 1, len(lst)):
            sum_tmp = lst[i] + lst[j] + lst[k]
            if((sum_lst < sum_tmp) and (sum_tmp <= m)):
                sum_lst = sum_tmp

print(sum_lst)