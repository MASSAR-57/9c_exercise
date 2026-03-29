#include <stdio.h>

int main(void) {
    int score = 0;

    do {
        if (score != 0) printf("点数は0~100点の間で入力してください\n");
        printf("テスト点数を入力してください:");
        scanf("%3d", &score);
    } while (score < 0 || score > 100);

    printf("テストの点数は%3d点です．\n", score);

    return 0;
}
