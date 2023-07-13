#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter array size = ");                 //Enter array size
    scanf("%d",&x);
    int arr1[x],arr2[x],arr3[x],i,scalar_sum=0,vector_sum=0,scalar_product=0;

    printf("\nEnter values of first array\n");
    for(i=0;i<x;i++){
        printf("Enter %d value = ",i+1);
        scanf("%d",&arr1[i]);
        scalar_sum+=arr1[i];                       //Calculate Scalar sum
        }
    printf("\n\nEnter values of Second array\n");
    for(i=0;i<x;i++){
        printf("Enter %d value = ",i+1);
        scanf("%d",&arr2[i]);
    }
    printf("\n\nScalar sum = %d\n",scalar_sum);      //Display Scalar sum

    printf("Vector sum     = ");
    for (i=0;i<x;i++){
        arr3[i]=arr1[i]+arr2[i];                   //Calculate Vector sum
        printf("%d   ",arr3[i]);                    //Display Vector sum
    }

    printf("\nVector Product = ");
    for(i=0;i<x;i++){
        arr3[i]=arr1[i]*arr2[i];                   //Calculate Vector Product
        scalar_product+=arr3[i];                   //Calculate Scalar product
        printf("%d   ",arr3[i]);                    //Display Vector product
    }
    printf("\nScalar Product = %d",scalar_product); //Display Scalar product
    return 0;
}
