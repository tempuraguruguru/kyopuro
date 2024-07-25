n, y = map(int, input().split())
flag = True
if(y % 1000 == 0 and flag):
    for i in range(0, n+1):
        for j in range(0, n+1-i):
            if(10000*i + 5000*j + 1000*(n-i-j) == y and flag):
                print(f"{i} {j} {n-i-j}")
                flag = not flag
                break
        if(not flag):
            break
    if(flag):
        print("-1 -1 -1")