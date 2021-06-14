#include <stdio.h>

int main(void) {

    int n;
    do {
        scanf("%d", &n);
        if (n > 0) {
            puts("positive");
        } else if (n < 0) {
            puts("negative");
        } else {
            puts("zero");
        }
        scanf("%d", &n);
    } while (n == 0);

    return 0;
}

