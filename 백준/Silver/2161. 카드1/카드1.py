n = int(input())

card = [int(i + 1) for i in range(n)]

queue = []

while len(card) > 1:
    queue.append(card.pop(0))
    back = card[0]
    card.pop(0)
    card.append(back)

queue.append(card[0])

for data in queue:
    print(data, end=' ')
