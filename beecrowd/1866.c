#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int temp;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);

        if(temp % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }

    return 0;
}