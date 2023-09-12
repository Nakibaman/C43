#include <stdio.h>
#include <stdlib.h>
void swap(int a,int b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
    printf("After swap \n a=%d,b=%d",a,b);

}

int main()
{
    int a,b;
    a=-10;
    b=-1;
    printf("Before swap \na=%d,b=%d\n",a,b);
    swap(a,b);


    return 0;
}
