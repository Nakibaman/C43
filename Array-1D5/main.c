#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[]={20,3,4,6};
    int array2[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter value of %d ",i+1);
        scanf("%d",&array2[i]);
    }
    printf("\n%d",array2[3]);
    return 0;
}
