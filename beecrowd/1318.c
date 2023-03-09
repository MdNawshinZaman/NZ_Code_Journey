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

        //sorting
        int temp;
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

        //check if sorted or not
        for(int i = 0; i < m; i++)
        {
            printf("%d ", people[i]);
        }
        printf("\n");

        //check how many unique digits
        int check_u, unique_n = 1, unique[m];
        for(int i = 0; i < m; i++)
        {
            check_u = people[i];
            unique[i] = check_u;
            if(check_u < people[i+1])
            {
                unique_n++;
                check_u = people[i];
            }
        }
        //printf("%d\n", unique_n);

        /*int test, num =  0, count = 0;
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

        printf("%d\n", count);*/
    }

    return 0;
}