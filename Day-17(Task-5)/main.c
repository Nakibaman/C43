#include <stdio.h>
#include <stdlib.h>
int ultacount(int n)
{
    if(n==0)
        return 0;
    printf("%d\t",n);
    n=n-1;
    ultacount(n);
}

int main()
{
  ultacount(10);
    return 0;
}
