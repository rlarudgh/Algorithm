music = list(map(int, input().split()))

if music == sorted(music):
    print("ascending")
elif music == sorted(music, reverse=True):
     print("descending")
else: 
    print("mixed")