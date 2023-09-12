#include <stdio.h>
#include <stdlib.h>
float ss(float p,float q);
int main()

{
    float p=6,q=5,k;
    k=ss(p,q);
    printf("\nReturned by Division function %f\n",k);
   return 0;
}
float ss(float p,float q)
{
float ss;
ss=p/q;
printf("Division of two number %f\n",ss);
return ss;
}

