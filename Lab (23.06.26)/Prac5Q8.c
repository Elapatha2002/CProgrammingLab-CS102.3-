#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,x,d;
    printf("Enter a number = ");
    scanf("%d",&n);
    x=n;              //value of n assign to x
    do{
        d=n%10;       //separate the last digit from number
        sum+=(d*d*d); //find the cube of last digit & adding to sum
        n/=10;        //remove the last digit from number
    }while(d>0);
    if(sum==x)
        printf("%d is an armstrong number\n",x);
    else
        printf("%d is not an armstrong number\n",x);
    return 0;
}
