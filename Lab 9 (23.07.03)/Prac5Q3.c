#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10],i,tot=0,count=0;
    for(i=0;i<10;i++){
        printf("Enter %d item price = ",i+1);
        scanf("%d",&num[i]);
        tot+=num[i];
    }
    for(i=0;i<10;i++){
        if(num[i]>200)
            count++;
    }
    printf("\nAverage value of item       = %.2f\n",(float)tot/10);
    printf("number of items (price>200) = %d\n",count);
    return 0;
}
