n, k = map(int, input().split())
L = sorted(list(map(int, input().split())), reverse = True)
res = 0

for i in range(k):
    res += L[i]
print(res)