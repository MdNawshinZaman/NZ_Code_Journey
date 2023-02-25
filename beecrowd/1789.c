#include<stdio.h>

int main(void)
{
    int l;
    while(scanf("%d", &l) != EOF)
    {
        int speed[l];


        for(int i = 0; i < l; i++)
        {
            scanf("%d", &speed[i]);
        }

        int sp;
        sp = speed[0];
        for(int j = 0; j < l; j++)
        {
            if(sp < speed[j]){sp = speed[j];}
        }

        if(sp < 10)
        {
            printf("1\n");
        }
        else if(sp >= 10 && sp < 20)
        {
            printf("2\n");
        }
        else if(sp >= 20)
        {
            printf("3\n");
        }
    }

    return 0;
}