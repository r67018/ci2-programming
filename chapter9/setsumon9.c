#include <stdio.h>
#include <string.h>

#define N 256

void put_stringr(char s[]) {
    int i;
    int len = strlen(s);
    char copy[len + 1];

    strcpy(copy, s);
    for (i = 0; i < len; i++) {
        s[i] = copy[len - i - 1];
    }
}

int main(void) {
    char s[N];

    scanf("%s", s);

    put_stringr(s);
    printf("%s\n", s);

    return 0;
}

