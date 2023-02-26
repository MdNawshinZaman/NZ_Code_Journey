//LIFE IS NOT A PROBLEM TO BE SOLVED
#include<stdio.h>

int main(void)
{
    char line[34]={"LIFE IS NOT A PROBLEM TO BE SOLVED"};

    int a;
    scanf("%d", &a);

    for(int i = 0; i < a; i++)
    {
        printf("%c", line[i]);
    }
    printf("\n");

    return 0;
}