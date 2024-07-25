s = input()
t = "".join(list(reversed(list(s))))
res_s = 0
res_t = 0
for i in range(len(s)):
    if(s[i] == 'A'):
        res_s = i
        break
for j in range(len(t)):
    if(t[j] == 'Z'):
        res_t = len(t) - j - 1
        break
print(res_t - res_s + 1)
# print(s.rfind('Z') - s.find('A') + 1)