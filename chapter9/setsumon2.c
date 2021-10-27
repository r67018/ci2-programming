#include <stdio.h>

int main(void) {
    char s[] = "abc";

    s[0] = '\0';
    printf("%s\n", s);

    return 0;
}

