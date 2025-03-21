#include <stdio.h>
#include <string.h>

int main()
{
    char name[50] = "Danish khan";
    char copy[50];

    strcpy(copy, name);

    printf("Copy Name is :%s\n",copy);

    return 0;
}
