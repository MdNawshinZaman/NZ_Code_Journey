#include <stdio.h>

int main(void)
{
    int card[5], a = 0, d = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &card[i]);
    }

    int card1 = card[0];

    if (card1 < card[1])
    {
        card1 = card[1];
        for (int j = 2; j < 5; j++)
        {
            if (!(card1 < card[j]))
            {
                a++;
                d++;
            } // if a == 0 then ascending
        }
    }
    else if (card1 > card[1])
    {
        card1 = card[1];
        for (int j = 2; j < 5; j++)
        {
            if (!(card1 < card[j]))
            {
                a++;
                d++;
            } // if d == 0 then descending
        }
    }

    if (a == 0)
    {
        printf("C\n");
    }
    else if (d == 0)
    {
        printf("D\n");
    }
    else if((a > 0) && (d > 0))
    {
        printf("N\n");
    }

    return 0;
}