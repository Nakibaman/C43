#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10]={8,9,2,4,700,5,3,74,45};
    int count=0, length=0;
    for(count=0; numbers[count]!='\0';count=count+1)
    {
        length=length+1;
    }
    printf("%d",length);
    return 0;
}
