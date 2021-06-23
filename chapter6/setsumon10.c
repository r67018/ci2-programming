#include <stdio.h>
#define N 10

int search_idx(const int v[], int idx[], int key, int n) {
    int i;
    int idx_count = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[idx_count] = i;
            idx_count++;
        }
    }
    return idx_count;
}

int main(void) {
    int i;
    int key;
    int v[N], idx[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &key);

    int idx_count = search_idx(v, idx, key, N);

    for (i = 0; i < idx_count; i++) {
        printf("%d ", idx[i]);
    }
    putchar('\n');

    return 0;
}
