#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=5,q=5,k;
    k=ss(p,q);
    printf("\nReturned by Division function %d\n",k);
   return 0;
}
int ss(int p,int q)
{
int ss;
ss=p/q;
printf("Division of two number %d\n",ss);
return ss;
}

