practical 1 . C:

#include <stdio.h>

int main() {
    int n;
    float max_value;

        printf("Enter the number of elements: ");
    scanf("%d", &n);

        float arr[n];

       printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

       max_value = arr[0];

      for(int i = 1; i < n; i++) {
        if(arr[i] > max_value) {
            max_value = arr[i];
        }
    }

        printf("The maximum value in the array is: %.2f\n", max_value);

    return 0;
}

