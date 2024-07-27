n = int(input())
A = sorted(list(map(int, input().split())))
res = 0
max = -1

for i in range(n):
    a1 = A[i]
    a3 = A[max]
    a2 = A[max-1]
    max -= 2
    res += a2
print(res)