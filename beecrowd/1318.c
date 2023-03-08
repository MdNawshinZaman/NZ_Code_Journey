#include<stdio.h>

int main(void)
{
    while(1)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        if((n == 0) && (m == 0)){break;}

        int people[m], sorted[m];
        for(int i = 0; i < m; i++)
        {
            scanf("%d", &people[i]);
        }

        sorted[0] = people[0];
        for(int i = 0; i < m; i++)
        {
            for(int j = i+1; j < m; j++)
            {
                if(sorted[i] > people[j])
                {
                    sorted[i] = people[j];
                }
            }
        }

        for(int i = 0; i < m; i++)
        {
            printf("%d ", sorted[i]);
        }

    }

    return 0;
}