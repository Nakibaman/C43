#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf(" Enter any character.\n");
    scanf("%c",&c);
    if(c>='a' && c<='z')
    {
        printf("You Entered a small letter :%c\nHaving ascii value %d",c,c);
    }
     else if(c>='A' && c<='Z')
     {
          printf("You Entered a capital letter :%c\nHaving ascii value %d",c,c);
    }
    else if(c>='0' && c<='9')
    {
        printf("You Entered a digit :%c\nHaving ascii value %d",c,c);
    }
    else
        printf("You entered a special character.");

    return 0;
}
