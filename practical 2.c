#include <stdio.h>

int main() {
    int n;
    float min, value;

        printf("Enter the number of elements: ");
    scanf("%d", &n);

        float arr[n];

        printf("Enter %d float elements:\n", n);
        for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    
       min = arr[0];
    
        for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

       printf("The minimum value in the array is: %.2f\n", min);

    return 0;
}
