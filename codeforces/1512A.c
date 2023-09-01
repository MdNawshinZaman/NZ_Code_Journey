#include <stdio.h>

int main(void)
{
    int t;
    scnaf("%d", &t);

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
    }

    return 0;
}