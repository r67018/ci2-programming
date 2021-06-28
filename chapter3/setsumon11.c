#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    switch(a % 2) {
        case 0:
            puts("even");
            break;

        case 1:
            puts("odd");
            break;
    }

    return 0;
}

