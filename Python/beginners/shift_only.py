n = int(input())
ls = list(map(int, input().split()))
result = 0
if (n == len(ls)):
    while(True):
        total = 0
        for i in ls:
            if (i % 2 == 0):
                total += 1
            else:
                break
        if(total == len(ls)):
            for i in range(len(ls)):
                ls[i] /= 2
            result += 1
        else:
            break
    print(result)