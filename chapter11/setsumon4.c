#include <stdio.h>

#define LEN 256

void put_string(const char *s) {
    printf("%s\n", s);
}

int main(void) {
    char s[LEN];
    scanf("%s", s);

    put_string(s);

    return 0;
}

