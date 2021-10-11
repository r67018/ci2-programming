#include <stdio.h>

int main(void) {
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    count++;

    printf("\n%d\n", count);

    return 0;
}
