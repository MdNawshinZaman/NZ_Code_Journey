#include <stdio.h>

int main(void)
{
    int bills[6] = {100, 50, 20, 10, 5, 2};

    while(1)
    {
        int n, m, change, times = 0;
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0){break;}

        change = m - n;

        for(int i = 0; i < 6; i++)
        {
            if ((change - bills[i]) >= 0)
            {
                times++;
                change -= bills[i];
                if(times == 1 && change == 0){change = -1; break;}

            }
            if (times == 2){break;}
        }

        if (change == 0){printf("possible\n");}
        else {printf("impossible\n");}
    }


    return 0;
}