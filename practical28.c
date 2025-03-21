#include <stdio.h>

struct employee {
    int Eno;        
    char Enm[50];    
    float Esal;      
};

void main() {
    struct employee emp;

    printf("Enter a Employee number :");
    scanf("%d",&emp.Eno);

    printf("Enter a Employee name :");
    scanf("%s",&emp.Enm);

    printf("Enter a Employee salary :");
    scanf("%f",&emp.Esal);
    
    printf("\nEmployee Details:\n");
    printf("Employee Number: %d\n", emp.Eno);
    printf("Employee Name: %s\n", emp.Enm);
    printf("Employee Salary: %.2f\n", emp.Esal);

}
