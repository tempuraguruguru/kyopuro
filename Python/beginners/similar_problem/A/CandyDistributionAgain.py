n, x = map(int, input().split())
A = sorted(list(map(int, input().split())))

for i in range(len(A)):
    x -= A[i]
    if(x < 0):
        print(i)
        exit()
if(x == 0):
    print(n)
else:
    print(n-1)

# （自戒）
# 問題文をしっかり読んで理解してからコーディングしましょう