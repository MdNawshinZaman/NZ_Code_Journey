#include <stdio.h>

unsigned int arr[4294967296u] = {0};

int main(void)
{
    int x = 0;
    for (unsigned int i = 1; i < 4294967296u; i += x)
    {
        arr[i] = 1;
        x++;
    }

    int n;
    scanf("%d", &n);

    unsigned int temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%u", &temp);
        if (temp < 0 || temp >= 4294967296u)
        {
            printf("Invalid input\n");
        }
        else
        {
            printf("%u\n", arr[temp]);
        }
    }

    return 0;
}
