#include <stdio.h>

int olympics(int);

int main(void) {
    int hantei, year;

    /* 西暦を入力 */
    printf("西暦を入力してください:");
    scanf("%4d", &year);

    hantei = olympics(year);

    switch (hantei) {
        case 0:
            printf("オリンピック開催されず！\n");
            break;
        case 1:
            printf("冬季オリンピック開催！\n");
            break;
        case 2:
            printf("夏季オリンピック開催！\n");
            break;
    }
    return 0;
}

int olympics(int year) {
    if (year % 2 == 0) {
        if (year % 4 == 0) return 2;
        else return 1;
    } else return 0;
}
