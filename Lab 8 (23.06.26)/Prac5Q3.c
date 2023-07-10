#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,no,fac=1;
    printf("Enter a integer = ");
    scanf("%d",&no);
    if(no<0)
        printf("Error : negative numbers are not valid");
    else{
        for(count=1;count<=no;count++){
            fac*=count;
        }
    printf("%d! = %d\n",no,fac);
    }
    return 0;
}
