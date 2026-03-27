#include <stdio.h>

int main(void) {
    int price;

    /* 定価を入力 */
    printf("定価を入力してください：");
    scanf("%d", &price);

    /* 割引価格を表示 */
    // printf("価格は次の通りです\n");
    printf("定　　価\t:%4d\n", price);
    printf("１割引き\t:%4d\n", (int) (price * 0.9));
    printf("３割引き\t:%4d\n", (int) (price * 0.7));
    printf("５割引き\t:%4d\n", (int) (price * 0.5));
    printf("８割引き\t:%4d\n", (int) (price * 0.2));

    return 0;
}
