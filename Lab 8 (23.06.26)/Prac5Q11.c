#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,x,i,count=0;
    printf("Enter a number = ");
    scanf("%d",&no);
    for(i=1;i<=no;i++){  //Loop for count factors
       if(no%i==0)
         count++;
    }
    if(count==2)
        printf("%d is a prime number ",no);
    else
        printf("%d is not a prime number ",no);
    return 0;
}
