#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emp_no,count=0;
    float bs;
    printf("Enter Employee number and salary (Enter -999 to stop)\n\n");
    while(1){
    printf("\nEnter employee number : ");    //Enter Employee number
    scanf("%d",&emp_no);
    if(emp_no==-999)
        break;

    printf("Enter basic Salary    = ");    //Enter Basic Salary
    scanf("%f",&bs);
    if(bs>=5000)
        count++;
    }
    printf("\nNumber of employees (basic salary>=5000) = %d",count);

    return 0;
}
