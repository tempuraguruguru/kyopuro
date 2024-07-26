a, b = map(int, input().split())
res = 0

for n in range(a, b+1):
    if(str(n) == "".join(reversed(str(n)))):
        res += 1
print(res)