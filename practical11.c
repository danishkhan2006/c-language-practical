#include <stdio.h>

void printSum(float a, float b)
{
    printf("Sum: %.2f\n", a + b);
}

int main()
{
    float num1, num2;

    printf("Enter first  number: ");
    scanf("%f", &num1);

    printf("Enter second  number: ");
    scanf("%f", &num2);

    printSum(num1, num2);

    return 0;
}
