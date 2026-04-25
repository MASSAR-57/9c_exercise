#include <stdio.h>

int main(void) {
    FILE *file;

    file = fopen("text.txt", "a+");
    fprintf(file, "Hello World!\n");
    fclose(file);

    return 0;
}
