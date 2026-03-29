#include <stdio.h>

int main(void) {
    int array[10];
    int size = sizeof(array) / sizeof(array[0]); /* sizeof()はバイト数を返す関数 */

    printf("10個の数値を入力してください:\n");
    for (int i = 0; i < size; i++) {
        printf("%02d番目の数:", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 9; i >= 0; i--) {
        printf("%d\n", array[i]);
    }

    return 0;
}
