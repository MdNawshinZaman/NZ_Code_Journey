#include<stdio.h>

int main(void)
{
    int card[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &card[i]);
    }

    int comp, c = 1, d = 1, n = 1;
    comp = card[0];

    if(comp < card[1])
    {
        d = 0;
        n = 0;
        for(int i = 1; i < 5; i++)
        {
            comp = card[i];
            if(!(comp < card[i]))
            {
                c = 0;
                n = 1;
                break;
            }
        }

    }
    else if(comp > card[1])
    {
        c = 0;
        n = 0;
        for(int i = 1; i < 5; i++)
        {
            comp = card[i];
            if(!(comp > card[i]))
            {
                d = 0;
                n = 1;
                break;
            }
        }
    }

    if(c == 1){printf("C\n");}
    else if(d == 1){printf("D\n");}
    else if(n == 1){printf("N\n");}

    return 0;
}