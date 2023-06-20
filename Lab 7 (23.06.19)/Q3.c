#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int choice;
    float rad;

    printf("Menu\n");
    printf("   1.Circumference of circle \n");
    printf("   2.Area of circle \n");
    printf("   3.Volume of sphere \n");
    printf("Enter your Choice - ");
    scanf("%d",&choice);

    printf("\nEnter the radius ");
    scanf("%f",&rad);

    switch (choice)
    {
    case 1:printf("Circumference = %.2f ",2*M_PI*rad);break;
    case 2:printf("Area = %.2f ",M_PI*rad*rad);break;
    case 3:printf("Volume = %.2f ",(4/3)*M_PI*rad*rad*rad);break;
    default:printf("Invalid output");
    }
    return 0;
}
