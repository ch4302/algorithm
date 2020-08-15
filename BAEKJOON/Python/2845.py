n, m = map(int, input().split())
people = list(map(int, input().split()))
append = n * m
for i in people:
    print(i - append, end = ' ')