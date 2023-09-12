#include <stdio.h>
#include <stdlib.h>
void faltu()
{
    printf("Mon valo nai");
    faltu();
}

int main()
{
   faltu();
    return 0;
}
