s_sec = 0
hts = int(input())
stp = int(input())
pta = int(input())
ath = int(input())
s_sec = hts + stp + pta + ath
x = s_sec // 60
y = s_sec % 60
print(x)
print(y)