s = input()
t = ""
ls = ["dream", "dreamer", "erase", "eraser"]

while(True):
    t_len = len(t)
    for line in ls:
        if(s.endswith(line+t)):
            t = line + t
            break
    if(s == t):
        print("YES")
        break
    elif(len(t) == t_len or len(s) < len(t)):
        print("NO")
        break