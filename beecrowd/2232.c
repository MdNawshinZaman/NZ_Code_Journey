#include <stdio.h>
#include <math.h>


int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        double sum = 0;
        int m;
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {
            sum += pow(2, j);
        }
        printf("%.lf\n", sum);
    }

    return 0;
}