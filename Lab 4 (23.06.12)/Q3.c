#include <stdio.h>
#include <stdlib.h>

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
    case 1:printf("Circumference = %.2f ",2*3.14*rad);break;
    case 2:printf("Area = %.2f ",3.14*rad*rad);break;
    case 3:printf("Volume = %.2f ",(4/3)*3.14*rad*rad*rad);break;
    default:printf("Invalid output");
    }
    return 0;
}
