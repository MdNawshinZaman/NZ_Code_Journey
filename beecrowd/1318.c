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

        int test, num =  0, count = 0;
        for(int i = 0; i < m; i++)
        {
            test = people[i];
            for(int j = 0; j < m; j++)
            {
                if(test == people[j])
                {
                    num++;
                }
            }
            if(num > 1)
            {
                count++;
                num = 0;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}