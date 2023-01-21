#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("Start- ");
    for(int i = 0; i <= 127; i++)
    {
        printf("%d ",i);
    }
    printf("End. ");

    printf("\n");

    printf("Start- ");
    for(int i = 0; i <= 127; i++)
    {
        printf("%c ",i);
    }

    printf("\n");
    printf("End. ");

    return 0;
}