#include <stdio.h>

int main() {
	int n;
	int song, song_rank = 1, song_p = 1;
	int p;
	int rank[50];
	scanf("%d %d %d", &n, &song, &p);
	for (int i = 0; i < n; i++) {
		scanf("%d", rank + i);
		if (rank[i] > song) song_rank++;
		if (rank[i] >= song) song_p++;
	}
	if (song_rank > p) printf("-1");
	else if (song_p > p) printf("-1");
	else printf("%d", song_rank);

	return 0;

}