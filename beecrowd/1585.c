#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int temp;
        if(a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        printf("%d cm2\n", (a/2)*b);
    }

    return 0;
}