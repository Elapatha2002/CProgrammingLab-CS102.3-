#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[10],i;
    for(i=0;i<10;i++){
      printf("Enter %d number = ",i+1);
      scanf("%d",&arr[i]);
    }
    printf("\nArray : ");
    for(i=0;i<10;i++){
       printf("%d ",arr[i]);
    }
    return 0; }
