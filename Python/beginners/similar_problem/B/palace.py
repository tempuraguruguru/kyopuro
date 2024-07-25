n = int(input())
t, a = map(int, input().split())
H = list(map(int, input().split()))
for i in range(n):
    temperature = t - H[i]*0.006
    H[i] = abs(temperature - a)
print(H.index(min(H))+1)