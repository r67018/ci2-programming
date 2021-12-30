#include <stdio.h>

#define LEN 256

int str_chnum(const char *s, int c) {
    int i = 0;
    int count = 0;

    while (s[i]) {
        if (s[i] == c) {
            ++count;
        }
        ++i;
    }
    return count;
}

int main(void) {
    char s[LEN];
    int c;

    scanf("%s", s);
    getchar();
    c = getchar();

    printf("%d\n", str_chnum(s, c));

    return 0;
}

