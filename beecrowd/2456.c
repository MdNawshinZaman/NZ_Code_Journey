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
            d = 1;
            if (!(card1 < card[j]))
            {
                a++;
                break;
            } // if a == 0 then ascending
            card1 = card[j];
        }
    }
    else if (card1 > card[1])
    {
        a = 1;
        card1 = card[1];
        for (int j = 2; j < 5; j++)
        {
            if (!(card1 > card[j]))
            {
                d++;
                break;
            } // if d == 0 then descending
            card1 = card[j];
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
    else if((a > 0) || (d > 0))
    {
        printf("N\n");
    }

    return 0;
}

//This code taught me that there is no !< or !> sign in C.
// I have to use !(a < b) OR !(a > b) to make the sence