#include<stdio.h>
#include<math.h>

#define division(x)(x/2)

#define MAX 100000
#define TRUE 1
#define FALSE 0

typedef struct {
	int key;
}E;

typedef struct {
	E heap[MAX];
	int size;
} Heap;

void init(Heap* heap){ heap->size = 0; }

void insert(Heap* heap, E item) {
	int i = ++(heap->size);
	while ((i != 1) && (abs(item.key) <= abs(heap->heap[division(i)].key))) {
		if (abs(item.key) == abs(heap->heap[division(i)].key) && item.key > heap->heap[division(i)].key) break;
		heap->heap[i] = heap->heap[division(i)];
		i = division(i);
	}
	heap->heap[i] = item;
}

E del(Heap* h) {
	E item, temp;
	if (!h->size) { item.key = 0; return item; }
	item = h->heap[1], temp = h->heap[(h->size)--];
	int parent = 1, child = 2;
	while (child <= h->size) {
		if ((child < h->size) &&
			abs(h->heap[child].key) > abs(h->heap[child + 1].key))
			child++;
		else if ((child < h->size) && abs(h->heap[child].key) == abs(h->heap[child + 1].key) &&
			(h->heap[child].key) > h->heap[child + 1].key)
			child++;
		if (abs(temp.key) < abs(h->heap[child].key)) break;
		else if (abs(temp.key) == abs(h->heap[child].key) && 
			temp.key < h->heap[child].key)
			break;
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}

int main() {
	Heap h;
	E e;
	int n, data;
	init(&h);
	scanf("%d", &n);
    while(n--){
        scanf("%d", &data);
		if (data > 0 || data < 0) {
			e.key = data;
			insert(&h, e);
		}else printf("%d\n", del(&h).key);
    }
}

/*
18
1
-1
0
0
0
1
1
-1
-1
2
-2
0
0
0
0
0
0
0
*/