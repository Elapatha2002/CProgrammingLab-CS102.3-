#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter month number (1-12) - ");
    scanf("%d",&n);
    printf("Total number of days = ");
    switch(n)
    {
        case 2:printf("28 days"); break;
        case 4: case 6: case 9: case 11:printf("30 days "); break;
        default:printf("31 days ");
    }

    return 0;
}
