n = int(input())
lst = list(map(int,input().split()))
lst2= []
for i in range(n) :
    if lst[i] == 0 :
        lst2.insert(0,i+1)
    else :
        lst2.insert(lst[i],i+1)

for i in reversed(lst2):
    print(i,end=' ')