#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[2][3];
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf("%d\t",&array[i][j]);
    }
    //printf("\n");

   }
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",array[i][j]);
    }
    printf("\n");

   }

    return 0;
}
