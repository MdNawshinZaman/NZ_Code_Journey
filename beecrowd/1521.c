#include <stdio.h>

int main(void)
{
    while(1)
    {
        int n;
        scanf("%d",&n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
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