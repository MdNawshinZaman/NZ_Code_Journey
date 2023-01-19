#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    /*do
    {
        n = get_int("Enter the size: ");
    }
    while (n<1);*/

    while(1)
    {
        n = get_int("Enter the size: ");
        if(n>1)
        {
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("?");
    }
    printf("\n");
    return 0;
}
