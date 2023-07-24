#include <stdio.h>
#include <stdlib.h>
float Quot(int x , int y)
{
    if(x>=0 && y>=0)
        return (float)x/y;
    else
        return -1;

}
    int main()
{
    int n1,n2;
    printf("Enter two whole numbers = ");
    scanf("%d %d",&n1,&n2);
    float result=Quot(n1,n2);
    if(result==-1.0)
        printf("ERROR:Input only whole numbers");
    else
        printf("Quotient = %.2f",result);

}
