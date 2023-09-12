#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&& (a>c))
    {
     if(a>c)
     {
       printf("%d is the largest",a);
     }
        else
        printf("%d is the largest",b);
    }
    if(b>c)
    {
        printf("%d is the largest",b);
    }
    else
        printf("%d is the largest",c);
    return 0;
}
