#include<stdio.h>

int main(void)
{
    int cards[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &cards[i]);
    }

    int comp;
    comp = card[0];

    if(comp < card[1])
    {
        for(int i = 1; i < 5; i++)
        {
            comp = card[i];
            if(!(comp < card[i]))
        }
        printf("C\n");
    }
    else if(comp > card[1])
    {

        printf("D\n");
    }

    return 0;
}