#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=1,number,sum=0,i=1;
    printf("Enter the value of number:");
    scanf("%d",&number);
    while(count<=number)
    {
        sum=sum+count;
        count=count+2;
         printf(" Sum%d : %d+%d=%d\n",i,sum,count,sum);
         i=i+1;
    }
    return 0;
}
