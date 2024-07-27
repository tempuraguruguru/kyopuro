h, w = map(int, input().split())
current_h, current_w = map(int, input().split())
C = list(input() for _ in range(h))
X = input()

current_w -= 1
current_h -= 1
# print(C[current_h][current_w])
# print(f"{current_h} {current_w}\n")
for x in X:
    if(x == 'L' and not (current_w-1 < 0) and C[current_h][current_w-1] and C[current_h][current_w-1] == '.'):
        # print("L")
        current_w -= 1
    elif(x == 'R' and not (current_w+1 >= w) and C[current_h][current_w+1] and C[current_h][current_w+1] == '.'):
        # print("R")
        current_w += 1
    elif(x == 'U' and not (current_h-1 < 0) and C[current_h-1][current_w] and C[current_h-1][current_w] == '.'):
        # print("U")
        current_h -= 1
    elif(x == 'D' and not (current_h+1 >= h) and C[current_h+1][current_w] and C[current_h+1][current_w] == '.'):
        # print("D")
        current_h += 1
    # else:
    #     print("F")
    # print(f"{current_h} {current_w}")
    # print(C[current_h][current_w])
print(f"{current_h+1} {current_w+1}")