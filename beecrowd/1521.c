#include <stdio.h>

int main(void)
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if (n == 0){break;}

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0, m = n - 1 ; j < m; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        int k, guilty;
        scanf("%d", &k);

        guilty = k;

        for(int i = 0; i < n; i++)
        {
            if(guilty == arr[i])
            {
                printf("%d\n", guilty);
            }
            else
            {
                guilty = arr[i];
            }
        }
    }

    return 0;
}