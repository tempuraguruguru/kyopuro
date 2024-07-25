n = int(input())
for i in range(9):
    if(n % (i+1) == 0 and 1 <= n//(i+1) and n//(i+1) <= 9):
        print("Yes")
        exit()
print("No")