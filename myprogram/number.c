#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int answer = rand() % 6 + 1;
    printf("%d\n", answer);

    return 0;
}
