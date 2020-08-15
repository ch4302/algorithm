n = int(input())
arr = list(map(int, input().split()))
arr_r = []
wei = max(arr)
for i in arr:
    arr_r.append(i / wei * 100)
print(sum(arr_r) / n)