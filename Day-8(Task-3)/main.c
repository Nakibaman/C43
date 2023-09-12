#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf( " Enter the value of a,b,c ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
    {
        printf("This is a triangle");
    }
    else if(b+c>a)
    {
      printf("This is a triangle");
    }
    else if(a+c>b)
    {
      printf("This is a triangle");
    }
    else
    printf("This is not a triangle");
    return 0;
}
