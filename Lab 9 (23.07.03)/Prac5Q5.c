#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emp_no,i=0,count=0;
    float h,OT;
    printf("Enter -999 to stop this program");

    while(1){
    //Enter Employee number
    printf("\n\nEnter employee number : ");
    scanf("%d",&emp_no);
    if(emp_no==-999)
        break;

    //Enter worked hours
    printf("Enter hours worked    = ");
    scanf("%f",&h);

    //calculate overtime payment
    if(h<40)
        OT=h*150;
    else
        OT=h*200;
    if(OT>=4000)
        count++;
    i++;

    //print Employee number & Overtime  payment
    printf("Employee number  : %d\n",emp_no);
    printf("Overtime Payment = %.2f",OT);
    }
    printf("\nPercentage of employees (OT>=4000) = %.2f%",(float)count/i*100);
    return 0;
}
