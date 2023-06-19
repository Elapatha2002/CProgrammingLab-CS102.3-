#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    switch(n%2)
      {
          case 0:printf("%d is a even number ",n);break;
          case 1:printf("%d is a odd number ",n);break;
          default:printf("Invalid Output ");
      }
    return 0;
}
