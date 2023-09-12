#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,sum=0;
    for(count=1;count<=99;count=count+2)
    {
        sum=sum+count;
    }
        printf(" Sum of all even number within 1 to 100 = %d\n",sum);
    return 0;
}
