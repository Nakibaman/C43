#include <stdio.h>
#include <stdlib.h>
int sum1(int a,int b)
 {
     return a+b;
 }

int main()
{
 int a,b;
 scanf("%d",&a);
 scanf("%d",&b);
 printf(" Sum is %d",sum1(a,b));
 return 0;
}
