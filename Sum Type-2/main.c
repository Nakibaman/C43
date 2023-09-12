#include <stdio.h>
#include <stdlib.h>
int sum2(int a,int b)
{
    printf("Sum is %d",a+b);
}

int main()
{
 int a,b;
 scanf("%d",&a);
 scanf("%d",&b);
 sum2(a,b);
 return 0;
}
