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

        int k;
        scanf("%d", &k);

        while(1)
        {
            if(arr[k] == k) {break;}
            k = arr[k];
        }

        printf("%d\n", k);
    }

    return 0;
}