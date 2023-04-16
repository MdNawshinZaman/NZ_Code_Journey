#include <stdio.h>

int main(void)
{

    while(1)
    {
        int arr[51];
        int n;
        scanf("%d",&n);
        if (n == 0){break;}

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int k;
        scanf("%d", &k);

        while(1)
        {
            if (arr[k - 1] == k){break;}
            else {k = arr[k - 1];}
            //printf("%d\n", k);
        }

        printf("%d\n", k);
    }

    return 0;
}