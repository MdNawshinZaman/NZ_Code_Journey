#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, qt, s, num;//qt--quantity
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &qt, &s);
        int distance[qt];

        for(int j = 0; j < qt; j++)
        {
            scanf("%d", &num);
            distance[j] = abs(s-num);
        }

        int winner = distance[0];
        int position = 0;

        for(int j = 1; j < qt; j++)
        {
            if(winner > distance[j])
            {
                winner = distance[j];
                position = j;
            }
        }

        printf("%d\n", position + 1);
    }

    return 0;
}