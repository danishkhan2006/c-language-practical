#include <stdio.h>
#include <string.h>

void main() 
{
    char s1[20] = "danish";
    char s2[20] = "khan";

    strcat(s1, s2);  

    printf("Value of combine string is: %s\n", s1);
    
}
