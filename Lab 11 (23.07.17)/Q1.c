#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[3][3]={{3,2,4},{1,4,6},{4,3,2}};
    int arr2[3][3]={{2,6,3},{4,3,2},{5,1,7}},arr3[3][3],c,r;
    for(c=0;c<3;c++){
        for(r=0;r<3;r++){
            printf("%d  ",arr1[c][r]);
        }
        printf("\t");
        for(r=0;r<3;r++){
            printf("%d  ",arr2[c][r]);
        }
        printf("\t");
        for(r=0;r<3;r++){
            arr3[c][r]=arr1[c][r]+arr2[c][r];
            printf("%d  ",arr3[c][r]);
        }
    printf("\n");
    }
    return 0;
}
