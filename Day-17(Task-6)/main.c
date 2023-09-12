#include <stdio.h>
#include <stdlib.h>
int ultacount(int n,int sum)
{
    if(n==0)
    {
    printf("\nSum is %d",sum);
    return 0;
    }
    printf("%d\t",n);
    sum=sum+n;
    n=n-1;
    ultacount(n,sum);
}

int main()
{
  ultacount(10,0);
    return 0;
}


