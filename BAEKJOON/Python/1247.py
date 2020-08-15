import sys
for i in range(0, 3):
    ite = int(sys.stdin.readline())
    sum = 0
    for j in range(0, ite):
        t = int(sys.stdin.readline())
        sum += t
    if(sum > 0): print('+')
    elif(sum < 0): print('-')
    else: print('0')