#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,s;
    double A;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The Area=%lf",A);
    return 0;
}
