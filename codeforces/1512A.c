#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    int freq[107], arr[107];
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < 107; j++)
        {
            freq[j] = 0;
            arr[j] = 0;
        }
        int n;
        scanf("%d", &n);

        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            freq[arr[j]]++;
        }


        // for(int j = 0; j < 20; j++)
        // {
        //     printf("%d ", freq[j]);
        // }
        // printf("\n");


        int uniq = 0;
        for(int j = 0; j < 101; j++)
        {
            if(freq[j] == 1)
            {
                uniq = j;
                break;
            }
        }

        // printf("uniq %d\n", uniq);

        int ans = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == uniq)
            {
                ans = j + 1;
                break;
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}