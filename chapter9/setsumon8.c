#include <stdio.h>
#include <string.h>

#define N 256

void put_stringr(const char s[]) {
    int i;
    int tail = strlen(s) - 1;
    for (i = tail; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');
}

int main(void) {
    char s[N];

    scanf("%s", s);

    put_stringr(s);

    return 0;
}

