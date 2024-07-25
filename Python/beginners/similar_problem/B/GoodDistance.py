import math
n, d = map(int, input().split())
ls = list(list(map(int, input().split())) for _ in range(n))
res = 0
for i in range(n-1):
    for j in range(i+1, n):
        dist = 0
        for k in range(d):
            dist += (ls[i][k] - ls[j][k])**2
        if((math.sqrt(dist)).is_integer()):
            res += 1
print(res)