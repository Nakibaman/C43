#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,number,sum=0;
    printf("Enter the value of number: ");
    scanf("%d",&number);
    for(count=1;count<=number;count=count+1)
    {
        sum=sum+count;
    }
        printf(" Sum= %d",sum);

    return 0;
}

