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

"""
import bisect

N = int(input())
L = list(map(int, input().split()))
L.sort()
count = 0

for i in range(N):
    for j in range(min(N, bisect.bisect_right(L, L[i])),N):
        k_max = bisect.bisect_left(L, L[i]+L[j]) - 1
        count += max(0, k_max - (bisect.bisect_right(L, L[j])-1))

print(count)
"""