#include <stdio.h>
#include <string.h>

#define NUM     128
#define LEN_MAX 128

void put_strary(const char s[NUM][LEN_MAX], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s\n", s[i]);
    }
}

int main(void) {
    int i;
    char cs[NUM][LEN_MAX];

    int count = 0;
    while (1) {
        scanf("%s", cs[count]);
        if (strcmp(cs[count], "$$$$$") == 0) break;
        count++;
    }

    put_strary(cs, count);

    return 0;
}

