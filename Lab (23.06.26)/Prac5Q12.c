#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,i;
    printf("Enter a number = ");
    scanf("%d",&no);
    printf("Factors = ");
    for(i=1;i<=no;i++){
       if(no%i==0)
       printf(" %d  ",i);
    }
    return 0;
}
