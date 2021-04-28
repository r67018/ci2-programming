#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n > 0) {
        puts("positive");
    } else if (n < 0) {
        puts("negative");
    } else {
        puts("zero");
    }

    return 0;
}

