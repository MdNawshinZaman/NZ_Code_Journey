#include<stdio.h>

int main(void)
{
    while(1)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        if((n == 0) && (m == 0)){break;}

        int people[m];
        for(int i = 0; i < m; i++)
        {
            scanf("%d", &people[i]);
        }

        int test;
        for(int i = 0; i < m; i++)
        {
            test = people[i];
            for(int j = i; j < m; j++)
            {
                if()
            }
        }


    }

    return 0;
}