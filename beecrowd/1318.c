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

        /*
        //check if sorted or not
        for(int i = 0; i < m; i++)
        {
            printf("%d ", people[i]);
        }
        printf("\n");
        */

        //check how many unique digits
        int check_u = people[0], unique_n = 1, unique[m];
        unique[0] = check_u;
        for(int i = 1, j = 1; i < m; i++)
        {
            if(check_u < people[i])
            {
                unique_n++;
                check_u = people[i];
                unique[j] = check_u;
                j++;
            }
        }
        //printf("%d\n", unique_n);

        /*// checking the unique values
        for(int i = 0; i < unique_n; i++)
        {
            printf("%d ", unique[i]);
        }
        printf("\n");
        */


        int count_i = 0, count_f = 0, z = 0;
        for(int i = 0; i < m; i++)
        {
            if(people[i] == unique[z])
            {
                count_i++;
                z++;
            }
            if(count_i > 1)
            {
                count_f++;
                count_i = 0;
            }
       }

        printf("%d\n", count_f);

    }

    return 0;
}