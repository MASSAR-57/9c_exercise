#include <stdio.h>

int main(void) {
    int cider = 198;
    int milk = 138;
    float tax = 0.05;
    int payment = 1000;
    int change1, change2;

    change1 = payment - (int) ((1 * cider + 2 * milk) * (1 + tax));
    change2 = (int) (payment - (1 * cider + 2 * milk) * (1 + tax));

    printf("%05d円\n", change1);
    printf("%05d円\n", change2);

    return 0;
}
