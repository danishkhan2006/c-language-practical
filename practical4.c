#include<stdio.h>

void main()
{
    int arr[25],n,i,j,temp;
    
    printf("Enter a numer of elements (min 25): ");
    scanf("%d",&n);

    if(n < 25){
        printf("Enter a elements at least 25.\n");
        return;
    }

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i = 0; i<n - 1; i++){
        for(j=0;j<n - i - 1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }             
        }
   }

    int newsize = 1;
    for(i=0;i<n;i++){
    if(arr[i] !=arr[newsize - 1]){
    arr[newsize++] = arr [i];
      }
   }

    printf("Array without duplicates:\n");
    for(i=0;i<newsize;i++) { 
    printf("%d",arr[i]);
    printf("\n");
  }

}
    