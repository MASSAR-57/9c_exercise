#include <stdio.h>
#include <string.h>

int main(void) {
    char first_name[32], family_name[64];

    printf("名字を入力してください:");
    scanf("%31s", family_name);

    printf("名前を入力してください:");
    scanf("%31s", first_name);

    strcpy(family_name, first_name);
    printf("%s\n", family_name);

    return 0;
}
