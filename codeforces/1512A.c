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

        int uniq = freq[0], ans = 0;
        for(int j = 1; j < 101; j++)
        {
            if(freq[j] > uniq)
            {
                uniq = freq[j];
                ans = j;
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}