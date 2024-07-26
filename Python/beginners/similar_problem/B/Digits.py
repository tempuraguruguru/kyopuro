n, k = map(int, input().split())

def PositionalNotation(n, k):
    s = ""
    while(n > 0):
        s += str(n % k)
        n //= k
    return "".join(reversed(s))

print(len(PositionalNotation(n, k)))