#include <stdio.h>

int main(void) {
    int n;

    printf("sizeof 1: %lu\n1はint型として扱われるので4バイト\n\n", sizeof 1);
    printf("sizeof +1: %lu\n+1も同じくint型として扱われる\n\n", sizeof +1);
    printf("sizeof -1: %lu\n-1も同じくint型として扱われる\n\n", sizeof -1);
    printf("sizeof(unsigned)-1: %lu\nunsigned型の4バイトから1が引かれる\n\n", sizeof(unsigned)-1);
    printf("sizeof(double)-1: %lu\ndouble型の8バイトから1が引かれる\n\n", sizeof(double)-1);
    printf("sizeof((double)-1): %lu\n-1がdoubleにキャストされ，double型のサイズが返ってくる\n\n", sizeof((double)-1));
    printf("sizeof n+2: %lu\nint型の4バイトに2が足された値\n\n", sizeof n+2);
    printf("sizeof (n+2): %lu\nn+2はint型だから4バイト\n", sizeof (n+2));
    printf("sizeof (n+0.2): %lu\nn+0.2をするときにdouble型にキャストされるから\n", sizeof (n+0.2));

    return 0;
}
