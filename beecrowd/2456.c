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
            if(card1 !< card[j]){a++;}//if a == 0 then ascending
        }
    }
    else if (card1 > card[1])
    {
        card1 = card[1];
        for (int j = 2; j < 5; j++)
        {
            if(card1 !> card[j]){d++;}//if d == 0 then descending
        }
    }

    else
    {
    }

    return 0;
}