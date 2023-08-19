#include <stdio.h>
#include <math.h>


int main(void)
{
    int c;
    while(scanf("%d", &c) != EOF)
    {
        for(int i = 0; i < c; i++)
        {
            int n;
            scanf("%d", &n);
            int arr[n];

            double avg = 0;
            for(int j = 0; j < n; j++)
            {
                scanf("%d", &arr[j]);
                avg += arr[i];
            }
            avg = avg / (double)n;

            int a_avg = 0;

            printf("%lf\n", avg);

            for(int j = 0; j < n; j++)
            {
                if(arr[j] > avg) a_avg++;
            }

            printf("%d\n", a_avg);

            printf("%.3lf", (a_avg/(double)n) * 100.0);
            printf("%%\n");

        }
    }


    return 0;
}