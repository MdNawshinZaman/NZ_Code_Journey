#include <stdio.h>

int main(void)
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0){break;}

        int arr[n], arr_comp[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
            arr_comp[i] = arr[i];
        }

        int max = 0;
        for(int i = 0; i < n; i++)
        {
            if(max < arr[i])
            {
                max = arr[i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == max)
            {
                arr[i] = -1;
            }
        }

        int second_max = 0;
        for(int i = 0; i < n; i++)
        {
            if(second_max < arr[i])
            {
                second_max = arr[i];
            }
        }

        int position = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr_comp[i] == second_max)
            {
                position = i + 1;
            }
        }

        printf("%d\n", position);

    }

    return 0;
}