#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int f1, f2;
        scanf("%d %d", &f1, &f2);
        int small = (f1 < f2)? f1 : f2;

        int stack = 0;
        for(int j = small; j > 0; j--)
        {
            if((f1 % j == 0) && (f2 % j == 0))
            {
                stack = j;
                break;
            }
        }
        printf("%d\n", stack);
    }

    return 0;
}