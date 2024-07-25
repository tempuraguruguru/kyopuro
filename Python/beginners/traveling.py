n = int(input())
route0 = [[0, 0, 0]]
routeN = list(list(map(int, input().split())) for _ in range(n))
route = route0+routeN

for i in range(len(route)-1):
    current = route[i]
    next = route[i+1]
    dt = next[0] - current[0]
    dist = abs(next[1] - current[1]) + abs(next[2] - current[2])
    if(dist <= dt):
        if not (dist % 2 == dt % 2):
            print("No")
            exit()
    else:
        print("No")
        exit()
print("Yes")