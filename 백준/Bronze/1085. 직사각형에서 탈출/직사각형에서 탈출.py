x, y, w, h = map(int, input().split())
mins = x
if mins > w - x: mins = w - x
if mins > y: mins = y
if mins > h - y: mins = h - y

print(mins)