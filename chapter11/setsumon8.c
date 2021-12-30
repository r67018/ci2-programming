#include <stdio.h>
#include <ctype.h>

#define LEN 256

void del_digit(char *s) {
    int i = 0, j = 0;
    while (s[i]) {
        if (!isdigit(s[i])) {
            s[j] = s[i];
            ++j;
        }
        ++i;
    }
    s[j] = '\0';
}

int main(void) {
    char s[LEN];
    scanf("%s", s);

    del_digit(s);

    printf("%s\n", s);

    return 0;
}

