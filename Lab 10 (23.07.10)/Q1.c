#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[9],i,sum,max,min;

    for(i=0;i<10;i++){
    printf("Enter %d value = ",i+1);
    scanf("%d",&num[i]);
    sum+=num[i];
    }

    max=num[0];
    min=num[0];
    for(i=0;i<10;i++){
        if(max<num[i])
            max=num[i];
        if(min>num[i])
            min=num[i];
    }
    //Display
    printf("Maximum value = %d\n",max);
    printf("Minimum value = %d\n",min);
    printf("Average value = %.2f\n\n",(float)sum/10);
    printf("Reverse oder of value = ");
    for(i=9;i>=0;i--){
        printf("%d   ",num[i]);
    }
    return 0;
}
