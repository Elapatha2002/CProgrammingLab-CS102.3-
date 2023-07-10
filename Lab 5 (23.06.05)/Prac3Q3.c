#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname[20];
    float bs,ns,inc;
    printf("Enter employee name - ");
    scanf("%s",&empname);
    printf("Enter basic salary  - ");
    scanf("%f",&bs);

    if(bs>=10000){
        inc=bs*0.15;
    }
    else if(bs<10000 && bs>=5000){
        inc=bs*0.1;
    }
    else{
        inc=bs*0.05;
    }
    ns=bs+inc;

    printf("\nEmployee Name  - %s\n",empname);
    printf("New salary     = %.2f\n",ns);

    return 0;
}
