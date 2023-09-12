#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,number,sum=0;
    printf("Enter the value of number:");
    scanf("%d",&number);
    for(count=2;count<=number;count=count+2)
    {
        sum=sum+count;
    }
        printf(" Sum of even number = %d\n",sum);
    return 0;
}
