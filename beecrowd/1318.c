#include<stdio.h>

int main(void)
{
    while(1)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        if((n == 0) && (m == 0)){break;}

        int people[m], temp;
        for(int i = 0; i < m; i++)
        {
            scanf("%d", &people[i]);
        }

        for(int i = 0; i < m; i++)
        {
            for(int j = i+1; j < m; j++)
            {
                if(people[i] > people[j])
                {
                    temp = people[i];
                    people[i] = people[j];
                    people[j] = temp;
                }
            }
        }

        /*for(int i = 0; i < m; i++)
        {
            printf("%d ", people[i]);
        }*/

    }

    return 0;
}