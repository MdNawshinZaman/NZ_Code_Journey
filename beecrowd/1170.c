#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int n;
    scanf("%d", &n);

    double temp;
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &temp);
        int count = 0;
        while(temp > 1)
        {
            count++;
            temp /= 2.0;
        }
        printf("%d ")
    }

    return 0;
}