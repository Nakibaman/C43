#include <stdio.h>
#include <stdlib.h>

int main()
{
      int p=4,q=5,k;
    k=mul(p,q);
    printf("\nReturned by Multiplication function %d\n",k);
    return 0;
}
int mul(int p,int q)
{
int mul;
mul=p*q;
printf("Multiplication of two number %d\n",mul);
return mul;
}


