#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Question 1
    printf("Pasindu Chanuka Elapatha\n");
    printf("Dharmasoka college\n\n\n");


    //Question 2
    printf("*\n**\n***\n****\n*****\n\n\n");


    //Question 3
    int no1;
    float no2;
    char name[15];
    double no3;

    printf("Enter an integer number =");
    scanf("%d",&no1);
    printf("Integer is %d\n\n",no1);

    printf("Enter an decimal value =");
    scanf("%f",&no2);
    printf("Decimal value is %.2f\n\n",no2);

    printf("Enter name =");
    scanf("%s",&name);
    printf("Name is %s\n\n",name);

    printf("Enter an decimal value =");
    scanf("%lf",&no3);
    printf("Decimal value is %.2lf\n\n",no3);


    //Question 4
    int n1,n2,total;
    printf("Enter first number =");
    scanf("%d",&n1);
    printf("Enter Second number =");
    scanf("%d",&n2);
    total=n1+n2;
    printf("Total = %d",total);
}
