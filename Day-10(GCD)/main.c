#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,s;
    printf("Enter the value of number l & s:");
    scanf("%d%d",&l,&s);
    r=l%s;
    while(r!=0)
    {
       l=s;
       s=r;

    }

         printf(" GCD is=%d",s);
    return 0;
}
