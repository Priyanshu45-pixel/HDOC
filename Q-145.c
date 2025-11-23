//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[20];
    int roll;
    float marks;
};
struct Student getTop(struct Student a, struct Student b) {
    if (a.marks > b.marks)
        return a;
    else
        return b;
}
int main() {
    struct Student s1, s2, top;
    printf("Enter name, roll, marks of student 1: ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);
    printf("Enter name, roll, marks of student 2: ");
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);
    top = getTop(s1, s2);  
    printf("\nTop Student:\n");
    printf("Name  : %s\n", top.name);
    printf("Roll  : %d\n", top.roll);
    printf("Marks : %.2f\n", top.marks);

    return 0;
}
