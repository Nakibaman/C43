#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    printf("Sum of three number = %d\n",a+b+c);
    printf("Multiplicatio of three number = %d\n",a*b*c);
    printf("Devision of three number = %d\n",a/b/c);
    printf("Operation of three number = %d\n",(a+b)*c);

    return 0;
}

