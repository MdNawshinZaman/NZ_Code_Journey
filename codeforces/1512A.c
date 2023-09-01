#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    int freq[107] = {0};
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < 107; j++)
        {
            freq[j] = 0;
        }
        int n, temp;
        scanf("%d", &n);

        for(int j = 0; j < n; j++)
        {
            scanf("%d", &temp);
            freq[temp]++;
        }

        int ans = 0;
        for(int j = 0; j < 101; j++)
        {
            if(freq[j] == 1)
            {
                ans = j+1;
                break;
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}