#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,max,min;

    printf("Enter three numbers ");
    scanf("%d%d%d",&x,&y,&z);
    max=z;
    min=z;
    if(max<x)
        max=x;
    if(max<y)
        max=y;
    if(min>x)
        min=x;
    if(min>y)
        min=y;
    printf("\nThe highest number is %d\n",max);
    printf("The lowest number is %d\n",min);
    return 0;
}
