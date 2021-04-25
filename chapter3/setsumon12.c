#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    switch(n) {
        case 0:
        case 1:
            puts("1bit");
            break;

        case 2:
        case 3:
            puts("21bit");
            break;

        case 4:
        case 5:
        case 6:
        case 7:
            puts("321bit");
            break;

        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            puts("4321bit");
            break;

        case 16:
            puts("54321bit");
            break;
    }

    return 0;
}

