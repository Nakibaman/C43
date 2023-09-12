#include <stdio.h>
#include <stdlib.h>
int min(int a,int b)
{

if(a<b)
    return a;
 else
    return b;
    }

int main()
{
    int a,b;
    printf(" Enter the value of a and b :");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",min(a,b));
    return 0;
}
