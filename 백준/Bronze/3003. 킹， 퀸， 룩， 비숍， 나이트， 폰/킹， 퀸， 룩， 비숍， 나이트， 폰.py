cp = [1, 1, 2, 2, 2, 8]
n = 6
li = list(map(int, input().split()))
for i in range(n):
    print(cp[i]-li[i], end=' ')