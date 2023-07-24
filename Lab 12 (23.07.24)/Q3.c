#include <stdio.h>
#include <stdlib.h>
int product(int x , int y)
{
    if(x>=0 && y>=0)
        return x*y;
    else
        return -1;

}
    int main()
{
    int n1,n2;
    printf("Enter two whole numbers = ");
    scanf("%d %d",&n1,&n2);
    int result=product(n1,n2);
    if(result==-1)
        printf("ERROR:Input only whole numbers");
    else
        printf("Product = %d",result);

}
