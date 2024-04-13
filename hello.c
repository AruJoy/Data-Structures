#include <stdio.h>
#include <stdlib.h>

// 구조체 정의
struct Person {
    char name[20];
    int age;
};

int main() {
    // 구조체 포인터 선언 및 할당
    struct Person *personPtr = (struct Person *)malloc(sizeof(struct Person));
    if (personPtr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 구조체 멤버에 접근하여 값 할당
    strcpy(personPtr->name, "John");
    personPtr->age = 30;

    // 구조체 멤버 값 출력
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);

    // 할당된 메모리 해제
    free(personPtr);

    struct Person person = {"Alice", 25};

    // 구조체 멤버에 접근하여 값 출력
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);

    return 0;
}