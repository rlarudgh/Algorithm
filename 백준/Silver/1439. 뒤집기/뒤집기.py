str = input()

cnt = 1
for i in range(len(str) - 1):
    if str[i] != str[i + 1]: cnt += 1

print(cnt // 2)