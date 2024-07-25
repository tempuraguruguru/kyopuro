n, x = map(int, input().split())
M = [int(input()) for _ in range(n)]

res = len(M)
total = sum(M)
x = x - total
res += x//min(M)
print(res)