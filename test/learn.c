#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    for(int i = 0; i <= 127; i++)
    {
        printf("%d ",i);
    }

    printf("\n");

    for(int i = 0; i <= 127; i++)
    {
        printf("%c ",i);
    }

    printf("\n");
    
    return 0;
}