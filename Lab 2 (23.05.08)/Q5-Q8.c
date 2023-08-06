#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Question 5
    float n1,n2,average;
    printf("Enter first decimal = ");
    scanf("%f",&n1);
    printf("Enter second decimal = ");
    scanf("%f",&n2);
    average=(n1+n2)/2;
    printf("Average is %.2f\n\n\n",average);


    //Question 6
    char stname[20];
    int byear,age;
    printf("Enter student name ");
    scanf("%s",&stname);
    printf("Enter birth year = ");
    scanf("%d",&byear);
    age=2023-byear;
    printf("Name : %s\nAge = %d\n\n\n",stname,age);


    //Question 7
    int x,y,z;
    printf("Enter two integers = ");
    scanf("%d %d",&x,&y);
    printf("Before swapping\nFirst number =%d\nSecond number =%d\n\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("After swapping\nFirst number =%d\nSecond number =%d\n\n\n",x,y);


    //Question 8
    printf("The color: %s\n","blue");
    printf("First number :%d\n",12345);
    printf("Second number :%04d\n",25);
    printf("Third number :%i\n",1234);
    printf("Float number :%3.2f\n",3.14159);
    printf("Hexadecimal :%x\n",255);
    printf("Octal : %o\n",255);
    printf("Unsigned value :%u\n",150);
    printf("Just print the percentage sign %% \n",10);
}
