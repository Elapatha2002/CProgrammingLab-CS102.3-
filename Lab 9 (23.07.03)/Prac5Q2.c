#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10],i,tot=0,min,max;
    for(i=0;i<10;i++){
        printf("Enter %d mark = ",i+1);
        scanf("%d",&num[i]);
        tot+=num[i];
    }
    max=num[0];
    min=num[0];
    for(i=0;i<10;i++){
        if(max<num[i])
            max=num[i];
        if(min>=num[i])
            min=num[i];
    }
    printf("\nAverage = %.2f\n",(float)tot/10);
    printf("Maximum = %d \nMinimum = %d",max,min);
    return 0;
}
