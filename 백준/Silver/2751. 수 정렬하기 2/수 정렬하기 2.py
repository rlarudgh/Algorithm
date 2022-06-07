length = int(input())
arr = [];

for _ in range(length):
  temp = int(input())
  arr.append(temp)
for index in sorted(arr):
  print(index)