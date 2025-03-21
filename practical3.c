#include <stdio.h>

int main() {
    int n;
    float sum = 0, average;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter %d values:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i]; 
    }

    
    average = sum / n;

    arr[n - 2] = sum;
    arr[n - 1] = average;

    printf("The sum of the values is: %.2f\n", arr[n - 2]);
    printf("The average of the values is: %.2f\n", arr[n - 1]);

    return 0;
}
