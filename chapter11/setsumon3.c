#include <stdio.h>

#define LEN 256

char *str_copy(char *d, char *s) {
    char *t = d;
    while (*d++ = *s++);
    return t;
}

int main(void) {
    char str[LEN] = "ABC";
    char tmp[LEN];

    printf("str = \"%s\"\n", str);

    printf("コピーするのは：");
    scanf("%s", tmp);

    printf("コピーしました\n");
    printf("str = \"%s\"\n", str_copy(str, tmp));

    return 0;
}

