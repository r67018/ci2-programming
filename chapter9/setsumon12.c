#include <stdio.h>
#include <string.h>

#define N 32

void rev_strings(char s[][128], int n) {
    int i;
    char rev[n][128];
    for (i = 0; i < n; i++) {
        strcpy(rev[i], s[n - i - 1]);
    }
    for (i = 0; i < n; i++) {
        strcpy(s[i], rev[i]);
    }
}

int main(void) {
    int n, i;
    char s[N][128];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }

    rev_strings(s, n);

    for (i = 0; i < n; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}

