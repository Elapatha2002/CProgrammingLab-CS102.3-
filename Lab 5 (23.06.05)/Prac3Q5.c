#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,mod;
    printf("Enter two integers ");
    scanf("%d%d",&n1,&n2);
    mod=n2%n1;
    if(mod==0) {
        printf("%d is a multiple of the %d ",n1,n2);
   } else {
        printf("%d is not a multiple of the %d ",n1,n2);
   }
    return 0;
}
