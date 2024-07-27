n = int(input())
S = list(input() for _ in range(n))
res = 0

for i in range(len(S)):
    if(S[i] == "sweet"):
        res += 1
    else:
        res = 0
    if(res == 2 and i != len(S)-1):
        print("No")
        exit()
print("Yes")