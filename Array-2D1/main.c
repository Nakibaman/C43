#include <stdio.h>
#include <stdlib.h>

int main()
{
   int array[2][2]={20,3,4,5};
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        printf("%d\t",array[i][j]);
    }
    printf("\n");

   }
    return 0;
}
