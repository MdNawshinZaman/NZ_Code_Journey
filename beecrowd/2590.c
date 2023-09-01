#include <stdio.h>


int main(void)
{
    int n;
    scanf("%d", &n);

    int temp;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);

        switch(temp % 4)
        {
            case 0:
                printf("1\n");
                break;

            case 1:
                printf("7\n");
                break;

            case 2:
                printf("9\n");
                break;

            case 3:
                printf("3\n");
                break;
        }
    }

    return 0;
}