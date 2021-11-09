#include <stdio.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void sort(int *n1, int *n2, int *n3) {
    if (*n2 < *n3) swap(n2, n3);
    if (*n1 < *n2) swap(n1, n2);
    if (*n2 < *n3) swap(n2, n3);
}

int main(void) {
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    sort(&n1, &n2, &n3);

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}

