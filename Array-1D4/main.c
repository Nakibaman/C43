#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array2[5];

   for(int i=0;i<5;i++)
    {
        printf("Enter %d th value : ",i+1);
        scanf("%d",&array2[i]);
    }
    return 0;

}
