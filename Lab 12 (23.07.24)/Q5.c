#include <stdio.h>
#include <stdlib.h>
void sum()
{
    int x,y;
    //Taking user inputs
    printf("Enter two numbers = ");
    scanf("%d %d",&x,&y);
    printf("Sum = %d\nDifference = %d\n\n",x+y,x-y);

}
int main()
{
    //Calling function several times
    sum();
    sum();
    sum();
    sum();
}
