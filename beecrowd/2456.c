#include <stdio.h>

int main(void)
{
    int card[5], a = 0;
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
            if(card1 !< card[j]){a;}
        }
    }
    else if (card1 > card[1])
    {
        card1 = card[1];
        for (int j = 2; j < 5; j++)
        {
            if(card1 !> card[j]){a++;}
        }
    }

    else
    {
    }

    return 0;
}