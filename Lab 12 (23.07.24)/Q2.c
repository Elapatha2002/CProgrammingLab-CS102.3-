#include <stdio.h>
#include <stdlib.h>
void sum(int x, int y)
{
    //calculate & display
    printf("Sum = %d\nDifference = %d",x+y,x-y);
}
int main()
{
   //user inputs
   int n1,n2;
   printf("Enter two numbers = ");
   scanf("%d %d",&n1,&n2);
   sum (n1,n2);
}
