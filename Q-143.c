//Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    float marks;
};
int main() {
    struct Student s[5];
    int i, max = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter name and marks of student %d:\n", i + 1);
        scanf("%s %f", s[i].name, &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }
    printf("\nHighest marks scored by: %s (%.2f)\n", s[max].name, s[max].marks);

    return 0;
}
