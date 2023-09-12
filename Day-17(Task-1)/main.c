#include <stdio.h>
#include <stdlib.h>
int nepal(int a)
{
    printf(" Nepal a a =%d\n",a);
    a=a+500;
    return a;
}

int main()
{
    int a;
    a=500;
    printf(" BD te a =%d\n",a);
    printf("Nepal theke fire a=%d\n", nepal(a));


    return 0;
}
