#include <stdio.h>

int main(void) {
    int i1, i2, i3;
    int array[4];

    printf("i1:%p\n", &i1);
    printf("i2:%p\n", &i2);
    printf("i3:%p\n", &i3);

    printf("  array  \t:%p\n", array);
    printf("array[0]\t:%p\n", &array[0]);
    printf("array[1]\t:%p\n", &array[1]);
    printf("array[2]\t:%p\n", &array[2]);
    printf("array[3]\t:%p\n", &array[3]);

    return 0;
}
