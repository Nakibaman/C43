#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=4,q=5,k;
    k=sum(p,q);
    printf("\nReturned by sum function %d\n",k);
    //s=div(p,q);
    //printf("\nReturned by div function %d\n",s);

    return 0;
}
int sum(int p,int q)
{
int sum;
sum=p+q;
printf("Summation of two number %d\n",sum);
return sum;
}
