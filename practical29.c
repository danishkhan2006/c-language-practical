#include <stdio.h>

struct student {
    int Sno;
    char Snm[50];
    char Sres[100];
};

void main() {
    struct student stu;

    printf("Enter a Student Number:");
    scanf("%d", &stu.Sno);
    

    printf("Enter  a Student Name: ");
    scanf("%s",&stu.Snm);

    printf("Enter a  Student Residence: ");
    scanf("%s",&stu.Sres);


    printf("\nStudent Details:\n");
    printf("Student Number: %d\n", stu.Sno);
    printf("Student Name: %s\n", stu.Snm);
    printf("Student Residence: %s", stu.Sres);

}
