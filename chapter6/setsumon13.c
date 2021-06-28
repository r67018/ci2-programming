#include <stdio.h>

void put_count() {
    static int count = 0;
    count++;
    printf("put_count:%d\n", count);
}

int main(void) {
    int i;
    int n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        put_count();
    }

    return 0;
}
