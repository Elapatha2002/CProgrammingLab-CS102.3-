#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib,n1=0,n2=1,count;
    printf("First 10 numbers of ""fibonacci Sequence""\n\n");

    for(count=0;count<10;count++){
        printf("%d  ",n1);
        fib=n1+n2;
        n1=n2;
        n2=fib;
    }
    return 0;
}
