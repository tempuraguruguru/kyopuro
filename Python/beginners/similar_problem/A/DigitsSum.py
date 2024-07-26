n = int(input())
res = []

def DigitsSum(a, b):
    sum = 0
    while(a > 0):
        sum += a % 10
        a //= 10
    while(b > 0):
        sum += b % 10
        b //= 10
    return sum

for a in range(1, n):
    if (n - a) > 0:
        res.append(DigitsSum(a, n-a))
    else:
        continue
print(min(res))

"""
nが10の冪乗であるとき、
例として、n = 100のときはa = 10, b = 90とすれば、res = 10とできる
他の10の冪乗のときも同様にres = 10となる

nが10の冪乗でないとき、
a, bのどちらかを0を含む数にしたいため、n = a*(10^k) + b*(10^l)となる
例として、n = 111のときはa = 110, b = 1とすれば、res = 3とできる
例として、n = 1211のときはa = 1210, b = 1とすれば、res = 5とできる
このように、resの値はnの各桁の和となる
"""

"""
def DigitsSum(n):
    sum = 0
    while(n > 0):
        sum += n % 10
        n //= 10
    return sum

if(n % 10 == 0):
    print(10)
    exit()
print(DigitsSum(n))
"""