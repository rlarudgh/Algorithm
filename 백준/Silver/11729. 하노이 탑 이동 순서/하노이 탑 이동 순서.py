def hanoi(n: int, a: int, b: int) -> None :
    if n > 1 : hanoi(n - 1, a, 6 - a - b)
    print(a, b);
    if n > 1 : hanoi(n - 1, 6 - a - b, b);

n = int(input())
print(2 ** n - 1)
if n <= 20 : 
  hanoi(n, 1, 3);