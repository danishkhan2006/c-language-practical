#include <stdio.h>

void main()
{
    int a1[2][2], a2[2][2], a3[2][2], i, j;
    printf("\nEnter a 1st matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" value of matrix [%d][%d]:", i, j);
            scanf("%d", &a1[i][j]);
        }
    }

    printf("\nEnter a 2nd matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("value of matrix [%d][%d]:", i, j);
            scanf("%d", &a2[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            a3[i][j] = a1[i][j] - a2[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a3[i][j]);
        }
        printf("\n");
    }
}