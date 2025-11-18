//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender { MALE, FEMALE };
struct Person {
    enum Gender gender;
};
int main() {
    struct Person p;
    printf("Enter gender (0 = MALE, 1 = FEMALE): ");
    scanf("%d", (int*)&p.gender);
    if (p.gender == MALE)
        printf("Gender: Male");
    else
        printf("Gender: Female");
    return 0;
}
