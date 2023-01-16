#include<stdio.h>
#include<cs50.h>

void Hi(int i)
{
    for(int n=0; n<i; n++)
    {
        printf("Hi\n");
    }
}

void Bye(int j)
{
    int m = 0;
    while(m<j)
    {
        printf("Bye.\n");
        m++;
    }
}

int main(void)
{
    Hi(3);
    Bye(2);
    return 0;
}