#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,sum,digit;
    printf("Enter number = ");
    scanf("%d",&no);
    do{
        digit=no%10; //separate the last digit from number
        sum+=digit;  //adding last digit
        no/=10;   //remove the last digit from number
    }while(no>0);
    printf("Sum of digits of entered number = %d",sum);
    return 0;
}
