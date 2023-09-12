#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,number,result;
    printf("Enter the value of number: ");
    scanf("%d",&number);
    for(count=1;count<=number;count=count+1)
    {
        result=number*count;
        printf(" %d * %d = %d\n",number,count,result);
    }

    return 0;
}
