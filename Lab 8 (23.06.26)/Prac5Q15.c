#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,count=0;
    for(i=0;i<10;i++){
      printf("Enter %d number = ",i+1);
      scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
       if(arr[i]%2==1)
         count++;
    }
    printf("Count of even numbers = %d",count);
    return 0;
}
