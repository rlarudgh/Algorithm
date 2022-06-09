n=int(input())
str=input()
s=0
m = 1234567891
for i in range(n):
    s += ((ord(str[i])-96) * (31 ** i))

print(s%m)