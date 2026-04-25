#include <stdio.h>

enum {
    OLYMPIC_NON,
    OLYMPIC_SUMMER,
    OLYMPIC_WINTER
};

int olympic(int year);

int main(void) {
    int year, hold;

    printf("西暦年を入力:");
    scanf("%d", &year);

    hold = olympic(year);

    switch (hold) {
        case OLYMPIC_NON:
            printf("オリンピック開催されず\n");
            break;
        case OLYMPIC_SUMMER:
            printf("夏季オリンピック開催\n");
            break;
        case OLYMPIC_WINTER:
            printf("冬季オリンピック開催\n");
            break;
    }

    return 0;
}

int olymic(int year) {
    if (year % 2 == 0) {
        if (year % 4 == 0) return OLYMPIC_SUMMER;
        else return OLYMPIC_WINTER;
    } else {
        return OLYMPIC_NON;
    }
}
