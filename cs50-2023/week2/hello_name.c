#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char name[100];
    printf("Whats your name?\n");
    scanf("%[^\n]s", name);

    printf("Hello, %s\n", name);

    return 0;
}