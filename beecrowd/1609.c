#include <stdio.h>

int main(void)
{
    int t, n;
    sacnf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int sheep[n];

        for(int i = 0; i < n; i++)
        {
            sacnf("%d", &sheep[i]);
        }
        
    }

    return 0;
}