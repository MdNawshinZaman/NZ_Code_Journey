#include<stdio.h>

int main(void)
{
    //1st line
    for(int j = 0; j < 39; j++)
    {
        printf("-");
    }
    printf("\n");

    //2nd line
    printf("|");
    printf("x = 35");
    for(int j = 0; j < 31; j++)
    {
        printf(" ");
    }
    printf("|\n");

    //3rd line
    printf("|");
    for(int j = 0; j < 37; j++)
    {
        printf(" ");
    }
    printf("|\n");

    //4th line
    printf("|");
    for(int j = 0; j < 15; j++)
    {
        printf(" ");
    }
    printf("x = 35");
    for(int j = 0; j < 16; j++)
    {
        printf(" ");
    }
    printf("|\n");

    //5th line
    printf("|");
    for(int j = 0; j < 37; j++)
    {
        printf(" ");
    }
    printf("|\n");

    //6th line
    printf("|");

    for(int j = 0; j < 31; j++)
    {
        printf(" ");
    }
    printf("x = 35");
    printf("|\n");

    //7th line
    for(int j = 0; j < 39; j++)
    {
        printf("-");
    }
    printf("\n");

    return 0;
}