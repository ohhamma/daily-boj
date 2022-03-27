N = int(input())
enter = input()
enter = enter.split()           # split 함수는 반환값을 갖는다!
enter = list(map(int,enter))

online = []

denied = 0

for i in range(N):
    if enter[i] in online:
        denied += 1
    else:
        online.append(enter[i])

print(denied)
