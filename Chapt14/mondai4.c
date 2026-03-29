#include <stdio.h>

int main(void) {
    char first_name[32], family_name[32], full_name[64];

    printf("名字を入力してください:");
    scanf("%31s", family_name);

    printf("名前を入力してください:");
    scanf("%31s", first_name);

    sprintf(full_name, "%s %s", family_name, first_name);
    printf("%s\n", full_name);

    return 0;
}
