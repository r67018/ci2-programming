#include <stdio.h>

#define N 256

void null_string(char s[]) {
    s[0] = '\0';
}

int main(void) {
    char s[N];
    scanf("%s", s);

    printf("%s\n", s);
    null_string(s);
    printf("%s\n", s);

    return 0;
}
