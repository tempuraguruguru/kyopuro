n, x, y = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
res = 0

sweet = 0
solty = 0
i = 0
if(x < y):
    A = sorted(A, reverse = True)
    while(sweet <= x and solty <= y and len(A) != 0 and i < len(A)):
        sweet += A[i]
        solty += B[i]
        i += 1
        res += 1
else:
    B = sorted(B, reverse = True)
    while(sweet <= x and solty <= y and len(B) != 0 and i < len(B)):
        sweet += A[i]
        solty += B[i]
        i += 1
        res += 1
print(res)