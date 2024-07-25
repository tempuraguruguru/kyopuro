n = int(input())
ls = list(map(int, input().split()))
if(n == len(ls)):
    alice = 0
    bob = 0
    ls = sorted(ls)
    flag = True
    i = 1
    while(i <= len(ls)):
        if(flag):
            alice += ls[-i]
        else:
            bob += ls[-i]
        i += 1
        flag = not flag
    print(alice - bob)