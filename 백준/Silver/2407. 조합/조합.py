n, r = map(int, input().split())

def fact(n):
  if n == 1 : return 1
  else : return n * fact(n - 1);

up = fact(n)
down = fact(n - r)*fact(r)

print(up // down)