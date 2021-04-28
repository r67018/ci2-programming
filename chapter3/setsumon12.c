#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    switch(n) {
        case 16:
            printf("5");

        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
            printf("4");

        case 7:
        case 6:
        case 5:
        case 4:
            printf("3");

        case 3:
        case 2:
            printf("2");

        case 1:
            printf("1bit\n");
    }

    return 0;
}

