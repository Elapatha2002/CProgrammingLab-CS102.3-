#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Question 1
    int age;
    printf("Hi,How Old are you? ");
    scanf("%d",&age);
    printf("\nWelcome %d\nLet's be friends!\n\n\n",age);


    //Question 2
    printf("%6d%6d%6d\n",2,4,8);
    printf("%6d%6d%6d\n",3,9,27);
    printf("%6d%6d%6d\n\n\n",4,16,64);


    //Question 3
    float dist,time,avgs;
    printf("Enter the traveled distance(m) = ");
    scanf("%f",&dist);
    printf("Enter taken time to travel = ");
    scanf("%f",&time);
    avgs=dist/time;
    printf("The average speed is = %.2fms-1\n\n\n",avgs);


    //Question 4
    float fahren,celsi;
    printf("Enter the fahrenheit value = ");
    scanf("%f",&fahren);
    celsi=(fahren-32)*5/9;
    printf("\nThe celsius value is %.2f ",celsi);
}
