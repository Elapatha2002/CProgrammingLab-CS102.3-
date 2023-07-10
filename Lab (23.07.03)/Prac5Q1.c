#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,p=0,n=0,z=0;
    for(i=0;i<10;i++){
      printf("Enter %d number = ",i+1);
      scanf("%d",&num);
      if(num>0)      //Positives
        p++;
      else if(num<0) //Negatives
        n++;
      else           //Zeros
        z++;
    }
    printf("\nPositives = %d",p);
    printf("\nNegatives = %d",n);
    printf("\nZeros     = %d",z);
    return 0;
}
