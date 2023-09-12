#include <stdio.h>
#include <stdlib.h>

int main()
{
      int matrixA[2][2]={7,9,4,6};
    int index1,index2;
    printf("matrixA:\n");
    for(index1=0;index1<2;index1=index1+1)
    {
         for(index2=0;index2<2;index2=index2+1)
         {
             printf("%d  ",matrixA[index1][index2]);
         }
         printf("\n");
    }
    int matrixB[2][2]={4,6,2,3};
    int index3,index4;
    printf("matrixB:\n");
    for(index3=0;index3<2;index3=index3+1)
    {
         for(index4=0;index4<2;index4=index4+1)
         {
             printf("%d  ",matrixB[index3][index4]);
         }
         printf("\n");
    }
    int mul[2][2],index5,index6;
    printf("Maltiplication of matrix A and B : \n");
     for(index5=0;index5<2;index5=index5+1)
    {
         for(index6=0;index6<2;index6=index6+1)
         {
            mul[index5][index6]=matrixA[index5][index6]*matrixB[index5][index6]- matrixB[index5][index6];
         }
         printf("\n");
    }
    int index7,index8;
     for(index7=0;index7<2;index7=index7+1)
    {
         for(index8=0;index8<2;index8=index8+1)
         {
           printf("%d  ",mul[index7][index8]);
         }
         printf("\n");
    }

       return 0;
}




