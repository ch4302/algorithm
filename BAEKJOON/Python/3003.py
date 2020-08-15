result = [1, 1, 2, 2, 2, 8]
pieces = list(map(int, input().split()))

print(" ".join(map(str, [x1 - x2 for (x2, x1) in zip(pieces, result)])))

# import numpy as np
# piece = np.array([1, 1, 2, 2, 2, 8], np.int32)
# piece_c = list(map(int, input().split()))
# piece_c = (np.array(piece_c, np.int32))
# res = piece - piece_c
# for i in res:
#     print(i, end = ' ')