#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=1,number,sum=0;
    printf("Enter the value of number:");
    scanf("%d",&number);
    while(count<=number)
    {
        sum=sum+count;
        count=count+2;
    }
        printf(" Sum of even number using while loop = %d",sum);
    return 0;
}
