x, a, b = map(int, input().split())
if(1 <= x and x <= 10000) and (1 <= a and a <= b and b <= 36):
    total = 0
    for i in range(1, x+1):
        l = [int(x) for x in list(str(i))]
        s = sum(l)
        if(a <= s and s <= b):
            total += i
    print(total)