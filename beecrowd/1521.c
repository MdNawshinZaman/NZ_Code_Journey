#include <stdio.h>

int main(void)
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if (n == 0){break;}

        int arr[n], copy_arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            copy_arr[i] = arr[i];
        }

        int k, guilty;
        scanf("%d", &k);

        guilty = k;

        for(int i = 0; i < n; i++)
        {
            if(guilty == arr[i])
            {
                printf("%d\n", guilty);
                break;
            }
            else
            {
                guilty = arr[i];
            }
        }


        /*int temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0, m = n - 1 ; j < m; j++)
            {
                if (copy_arr[j] > copy_arr[j + 1])
                {
                    temp = copy_arr[j];
                    copy_arr[j] = copy_arr[j + 1];
                    copy_arr[j + 1] = copy_temp;
                }
            }
        }*/

        /*for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");*/
    }

    return 0;
}