#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,sum=0;
    for(count=2;count<=100;count=count+2)
    {
        sum=sum+count;
    }
        printf(" Sum of all even number within 2 to 100 = %d\n",sum);
    return 0;
}
