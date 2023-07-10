#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("ASCII values of uppercase letters\n\n");
    for(ch='A';ch<='Z';ch++){
        printf(" %c : %d\n",ch,ch);
    }
    printf("\n\n\n");


    int i,x;
    for(i=1;i<=5;i++){
        for(x=1;x<=i;x++){
            printf(" *");
        }
    printf("\n");
    }

    return 0;
}
