#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=10,c=50,result;
    result=(a==b) && (a>b);
    printf("(a==b) && (a>b) is %d\n",result);
    result=(a!=b)&& (a>b);
    printf("(a!=b) && (a>b) is%d\n",result);
    result=(c!=b) && (c>b);
    printf("(c!=b)&& (c>b)is %d\n",result);
    result=(a!=b) || (a>=b);
    printf("(a!=b) || (a>=b) is %d\n",result);
    result=!(a!=b);
    printf("!(a!=b) is %d\n",result);
    return 0;
}
