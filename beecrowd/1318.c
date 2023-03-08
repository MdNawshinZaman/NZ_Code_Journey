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

        for(int i = 0; i < m; i++)
        {
            printf("%d ", people[i]);
        }
        printf("\n");

        int count = 0;
        for(int i = 0; i < m-1; i++)
        {
            if(people[i] < people[i+1])
            {
                count++;
            }
        }

        /*int nonCopy = 1, num = people[0];
        for(int i = 1; i < m; i++)
        {
            if(num < people[i])
            {
                nonCopy++;
                num = people[i];
            }
        }*/

        printf("%d\n", count);

    }

    return 0;
}