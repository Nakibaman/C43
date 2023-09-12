#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[]={2,3,4,5};
    int array2[5];
 for(int i=0;i<4;i++)
    {
        printf("%d \n ",array[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("Enter %d th value : ",i+1);
        scanf("%d",&array2[i]);
    }

    return 0;
}
