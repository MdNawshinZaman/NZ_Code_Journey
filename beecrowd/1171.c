#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int num[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int step = 0, smallest = num[0];

    for(int i = 0; i < n; i++)
    {
        for(int j = step; j < n; j++)
        {
            if(smallest > num[j])
            {
                smallest = num[j];
            }
        }
        step++;
        smallest
    }

    return 0;
}