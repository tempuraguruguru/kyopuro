import bisect

n, q = map(int, input().split())
A = sorted(list(map(int, input().split())))
B = list(list(map(int, input().split())) for _ in range(q))

def f(L, x):
    res = 0
    for l in L:
        if(l <= x):
            res += 1
    return res

for set in B:
    L = []
    for i in range(len(A)):
        L.append(abs(A[i] - set[0]))
    # print(L)
    x = 0
    while(f(L, x) < set[1]):
        x += 1
    print(x)

# # print("\n")
# inf = float('inf')
# for set in B:
#     current = bisect.bisect_left(A, set[0])
#     r = l = 0
#     # L = A[:current]
#     L = sorted(A[:current], reverse = True)
#     R = A[current:]
#     # print(f"{set[0]} {set[1]}: index({current})")
#     # print(f"L = {L}, R = {R}")
#     for _ in range(set[1]):
#         cp = abs(L[l] - set[0]) if l != len(L) else inf
#         cn = abs(R[r] - set[0]) if r != len(R) else inf
#         # print(f"cp = {cp}, cn = {cn}")
#         if(cp <= cn):
#             l += 1
#         else:
#             r += 1
#         # print(f"l = {l}, r = {r}")
#     if(abs(A[current-l] - set[0]) >= abs(A[current+r-1] - set[0])):
#         print(f"{abs(A[current-l] - set[0])}")
#     else:
#         print(f"{abs(A[current+r-1] - set[0])}")