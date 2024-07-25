n = int(input())
for i in range(n//7 + 1):
    for j in range(n//4 + 1):
        total = 7*i + 4*j
        if(total == n):
            print("Yes")
            exit()
print("No")