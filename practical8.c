#include <stdio.h>
#include <string.h>

struct student
{
    int age;
    char name[100];
    float grade;
};
void main()
{
    struct student s1;

    printf("Enter a student name:");
    scanf("%s", s1.name);

    printf("Enter a student age:");
    scanf("%d", &s1.age);

    printf("Enter a student grade:");
    scanf("%f", &s1.grade);

    printf("Student details:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Grade: %.2f\n", s1.grade);
}
