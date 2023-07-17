#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4][4]={8,17,9,6,6,2,11,18,7,27,28,0,4,5,3,10},c,r;
    for(c=0;c<4;c++){
        for(r=0;r<4;r++){
            printf("%d\t",arr[c][r]);
        }
        printf("\n");
    }
    printf("\nArray address of interger value ""5"" =");
    for(c=0;c<4;c++){
        for(r=0;r<4;r++){
                if(arr[c][r]==5)
                    printf(" Array[%d][%d]",c,r);
        }
    }
    printf("\n");
    return 0;
}
