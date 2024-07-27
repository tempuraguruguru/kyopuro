n, l = map(int, input().split())
S = []
for _ in range(n):
    S.append(input())
res = ""

S = sorted(S)
for s in S:
    res += s
print(res)