s = input()
w = 0

for i in range(1, len(s)):
    if (s[i] == ' '):
        w += 1

if (s[-1] != ' '):
    w += 1

print(w)