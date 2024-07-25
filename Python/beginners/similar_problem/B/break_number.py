n = int(input())
res = []
for i in range(1, n+1):
    j = i-1
    res.append(0)
    while(i % 2 == 0):
        i /= 2
        res[j] += 1
print(res.index(max(res))+1)