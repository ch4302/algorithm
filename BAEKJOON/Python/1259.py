while True:
    n = input()
    if n == '0':
        break
    n_r = n[::-1]
    if n == n_r:
        print('yes')
    else:
        print('no')