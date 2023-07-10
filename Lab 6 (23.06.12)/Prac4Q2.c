#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,count=-1;
    float n1,n2;

while(count=1) { //Loop this program
    printf("1.Addition \n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.Multiplication\n\n");
    printf("Enter your choice (1,2,3,4) -: ");
    scanf("%d",&choice);

    printf("Enter first number ");
    scanf("%f",&n1);
    printf("Enter second number ");
    scanf("%f",&n2);

    switch (choice)
    {
        case 1:printf("Addition = %d \n",n1+n2);break;
        case 2:printf("Subtraction = %d\n",n1-n2);break;
        case 3:printf("Division = %.2f",(float)n1/n2);break;
        case 4:printf("The addition = %d\n",n1*n2);break;
        default:printf("Invalid Output ");
    }
    printf("\n\n\n");
    count++;
}
    return 0;

}
