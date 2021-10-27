#include <stdio.h>
#include <string.h>

#define NUM     128
#define LEN_MAX 128

int main(void) {
    int i;
    int count = 0;
    char s[NUM][LEN_MAX];

    for (i = 0; i < NUM; i++) {
        scanf("%s", s[i]);
        if (strcmp(s[i], "$$$$$") == 0) break;
        count++;
    }

    for (i = 0; i < count; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}

