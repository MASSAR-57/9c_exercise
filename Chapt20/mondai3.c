#include "People.h"

int main(void) {
    People data[3];

    for (int i = 0; i < 3; i++) {
        InputPeople(&data[i]);
    }

    for (int i = 0; i < 3; i++) {
        ShowPeople(data[i]);
    }

    return 0;
}
