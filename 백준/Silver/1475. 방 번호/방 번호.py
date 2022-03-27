N = input()

l = [0,0,0,0,0,0,0,0,0]     # 9 슬롯 없애줌 (6 슬롯에 포함)

for i in range(len(N)):
    if int(N[i]) == 9:
        l[6] += 1
    else:
        l[int(N[i])] += 1

if l[6] % 2 == 0:
    l[6] = l[6] // 2
else:
    l[6] = l[6] // 2 + 1

print(max(l))