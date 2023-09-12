#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("Largest Number is= %d",a);
    else if((b>c)&&(b>c))
    printf("Largest Number is= %d",b);
    else
    printf("Largest Number is= %d",c);
    return 0;
}
