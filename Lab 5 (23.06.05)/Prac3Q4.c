#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi=3.14159,d,c,a,rad;
    printf("Enter radius = ");
    scanf("%f",&rad);

    d=2*rad;
    c=2*pi*rad;
    a=pi*rad*rad;

    printf("\nDiameter      =%.2f\n",d);
    printf("Circumference =%.2f\n",c);
    printf("Area of circle=%.2f\n",a);
    return 0;
}
