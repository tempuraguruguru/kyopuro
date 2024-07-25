s = input()
t = input()

s_up = ''.join(sorted(s))
s_down = ''.join(reversed(sorted(s)))
t_up = ''.join(sorted(s))
t_down = ''.join(reversed(sorted(t)))

# sが辞書順的に一番小さくなる場合とtが一番大きくなる場合
print("Yes") if(s_up < t_down) else print("No")