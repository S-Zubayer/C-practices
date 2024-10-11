
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student student1;

    printf("Enter student's name: ");
    scanf("%49s", student1.name);
    printf("Enter student's age: ");
    scanf("%d", &student1.age);
    printf("Enter student's GPA: ");
    scanf("%f", &student1.gpa);

    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);
    printf("Student GPA: %.2f\n", student1.gpa);

    return 0;
}
