#include <stdio.h>

typedef struct {
    char name[64];
    int age;
    int sex;
} person;

void input_person(person &people[]);
void output_person(person people[]);

int main(void) {
    person people[10];

    input_person(&people);

    output_person(people);

    return 0;
}

void input_person(person &people[]) {
    for (int i = 0; i < 3; i++) {
        printf("%d番目の人のデータ入力です", i);
        printf("名前:");
        scanf("%s", &people[i].name);
        printf("年齢:");
        scanf("%d", &people[i].age);
        printf("性別（男は1，女は0）:");
        scanf("%d", &people[i].sex);
    }

    return 0;
}

void output_person(person people[]) {
    for (int i = 0; i < sizeof(people)/sizeof(people[0]); i++) {
        printf("%d人目のデータ\n", i);
        printf("名前:%s\n", people[i].name);
        printf("年齢:%d\n", people[i].age);
        if (people.sex == 1) printf("性別:男性\n");
        else printf("性別:女性\n");
        printf("");
    }

    return 0;
}
