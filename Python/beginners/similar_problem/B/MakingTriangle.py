n = int(input())
L = list(map(int, input().split()))
res = 0
for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            if(L[i] != L[j] and L[j] != L[k] and L[k] != L[i]):
                # print(f"{[i+1, j+1, k+1]}=>{[L[i], L[j], L[k]]}")
                if(L[i]+L[j] > L[k]) and (L[i] < L[j]+L[k]) and (L[i]+L[k] > L[j]):
                    res += 1
print(res)