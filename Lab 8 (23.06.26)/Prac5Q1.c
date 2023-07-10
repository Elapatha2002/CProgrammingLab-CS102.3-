#include <stdio.h>
#include <stdlib.h>

int main()
{
    //while iteration
    int x=0;
    while(x<=100){
     printf("%d ",x);
     x++;
    }
    printf("\n\n\n");
    x=0;

    //do while iteration
    do{
        printf("%d ",x);
        x++;
    }while(x<=100);

    printf("\n\n\n");

    //for loop
    for(x=0;x<=100;x++){
        printf("%d ",x);
    }
    return 0;
}
