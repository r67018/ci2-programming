#include <stdio.h>

int main(void) {
    char *p = "123";
    p = "456" + 1;

    printf("%s\n", p);
    printf("\"456\" + 1\nではなく\nchar *q = \"456\"; p = q + 1\nと考えると分かりやすい。\nq + 1 というのはq[1]のアドレスを指すため、pには'5'のアドレスが入る。よって出力されるのは\"56\"になる\n");

    return 0;
}

