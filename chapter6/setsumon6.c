#include <stdio.h>

void H_World(int n) {
    int i;
    for (i = 0; i < n; i++) {
        puts("Hello World");
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    H_World(n);

    return 0;
}
