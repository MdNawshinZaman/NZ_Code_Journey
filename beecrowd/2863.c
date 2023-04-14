#include <stdio.h>

int main(void)
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        float attempt, fastest = 12.0;
        for(int i = 0; i < n; i++)
        {
            scanf("%f", &attempt);
            if(fastest > attempt)
            {
                fastest = attempt;
            }
        }
        printf("%.2f\n", fastest);
    }

    return 0;
}