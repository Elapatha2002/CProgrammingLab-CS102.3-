#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,ex,power=1;
    printf("Let's calculate nth power of a number\n");
    printf("Enter base value     = ");
    scanf("%d",&base);
    printf("Enter exponent value = ");
    scanf("%d",&ex);
    printf("\n%d to the power %d = ",base,ex);

    while(ex>0){
        power*=base;
        ex--;
    }
    printf("%d",power);
    return 0;
}
