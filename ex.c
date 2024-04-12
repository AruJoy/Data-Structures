#include <stdio.h>

int main() {
    char myName[] = "A"; //myName value:A 주소:0xfffffffff0f0
    char* ptr1 = &myName; //ptr1 value:0xfffffffff0f0 주소:0xfffffffff0d8
    void** ptr = &ptr1; //ptr value:0xfffffffff0d8 주소:몰?루
    char* name = (char*) *ptr; //name value:0xfffffffff0f0 주소:몰?루
    char output = *name; //output value:0xfffffffff0f0 주소:몰?루

    printf("%p \n", (void*)ptr1);
    printf("%p \n", (void*)ptr);
    printf("%s \n", (void*)name);
    printf("%c \n", output);
    return 0;
    return 0;
}
