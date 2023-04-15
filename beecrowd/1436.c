#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++)
    {
        int n, age, z = 0, capt_age;
        scanf("%d", &n);
        int capt_pos = ceil(n / 2.0);

        for(int j = 0; j < n; j++)
        {
            scanf("%d", &age);
            z++;
            if(z == capt_pos)
            {
                capt_age = age;
            }
        }

        printf("Case %d: %d", i, capt_age);

    }

    return 0;
}