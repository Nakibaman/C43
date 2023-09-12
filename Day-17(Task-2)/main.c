#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    a=-10;
    b=-5;
    printf("Before swap\na=%d,b=%d\n",a,b);
    temp=b;
    b=a;
    a=temp;
    printf("After swap \n a=%d,b=%d",a,b);
    return 0;
}
