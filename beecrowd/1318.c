#include<stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int people[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &people[i]);
    }

    return 0;
}