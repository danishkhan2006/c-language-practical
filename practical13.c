#include<stdio.h>

void read(int arr[], int n) 
{
	int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
}

void print(int arr[], int n) 
{
	int i;
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    read(arr, n);
    print(arr, n);
    return 0;
}
