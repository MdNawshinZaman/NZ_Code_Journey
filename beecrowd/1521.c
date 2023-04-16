#include <stdio.h>

int main(void)
{
    int arr[51];
    //while(1)
    //{
        int n;
        do
        {
            scanf("%d",&n);
        }
        while (n < 3 || n > 50);

        //if (n == 0){break;}

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int k;
        scanf("%d", &k);
        printf("%d\n", k);

        while(1)
        {
            if (arr[k] == k){break;}
            else {k = arr[k];}
            printf("%d\n", k);
        }

        printf("%d\n", k);
    //}

    return 0;
}