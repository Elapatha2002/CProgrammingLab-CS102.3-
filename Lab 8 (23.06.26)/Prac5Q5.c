#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,digit;
    printf("Enter a number  = ");
    scanf("%d",&no);
    printf("\nReversed number = ");
    do{
      digit=no%10;           //separate last digit
      printf("%d",digit);    //print the digit
      no/=10;                //remove the digit from number
    }while(no>0);
    return 0;
}
