#include <stdio.h>
#include <string.h>

#define LEN 256

char *str_chr(const char *s, int c) {
    int i;
    int len = strlen(s);

    for (i = 0; i < len; i++) {
        if (s[i] == c) {
            return (s + i);
        }
    }

    return NULL;
}

int main(void) {
    char s[LEN];
    int c;

    scanf("%s", s);
    getchar();
    c = getchar();

    char *p = str_chr(s, c);
    printf("%p\n", p);

    return 0;

}

