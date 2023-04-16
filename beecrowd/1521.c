#include <stdio.h>

int main(void)
{
    int arr[4];
    //while(1)
    //{
        int n;
        scanf("%d",&n);
        //if (n == 0){break;}

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int k;
        scanf("%d", &k);

        while(1)
        {
            if (arr[k] == k){break;}
            else {k = arr[k];}
        }

        printf("%d\n", k);
    //}

    return 0;
}