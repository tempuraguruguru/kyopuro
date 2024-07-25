a = int(input()) # 500yen
b = int(input()) # 100yen
c = int(input()) # 50yen
x = int(input()) # total

result = 0
for i in range(a+1):
    for j in range(b+1):
        for k in range(c+1):
            total = 500*i + 100*j + 50*k
            if(total == x):
                result += 1
print(result)