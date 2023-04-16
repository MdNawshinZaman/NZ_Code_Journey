#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int num;
        int result;
        scanf("%d", &num);

        result = ceil(num/2.0) - 1;

    }

    return 0;
}