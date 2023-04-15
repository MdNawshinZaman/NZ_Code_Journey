#include <stdio.h>

int main(void)
{
    int n, count = 0;
    scanf("%d", &n);

    int factorials[8] = {1, 2, 6, 24, 120, 720, 5040, 40320};

    while(n > 0)
    {
        for(int i = 7; i >= 0; i--)
        {
            if(n >= factorials[i])
            {
                count++;
                n -= factorials[i];
                break;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}