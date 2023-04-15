#include <stdio.h>

int main(void)
{
    int n, m;
    float best_avg = 0.0, goal, sum = 0.0;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%f", &goal);
            sum += goal;
        }
        sum =sum /(float)m;

        if (sum > best_avg)
        {
            best_avg = sum;
        }
    }

    printf("Best Avg: %.3f\n", best_avg);

    return 0;
}