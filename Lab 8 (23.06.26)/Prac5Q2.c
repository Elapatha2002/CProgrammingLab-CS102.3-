#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,tot,avg,count;
    for(count=1;count<=10;count++){
        printf("Enter %d mark = ",count);
        scanf("%d",&n);
        tot+=n;
    }
    avg=tot/10;
    printf("\nTotal   = %d \nAverage = %.2f\n",tot,(float)avg);
    if(avg>50)
        printf("You Passed the exam ");
    else
        printf("You Failed the exam ");
    return 0;
}
