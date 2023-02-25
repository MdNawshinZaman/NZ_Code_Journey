#include<stdio.h>

int main(void)
{
    int l;
    while(scanf("%d", &l) != EOF)
    {
        int speed[l], level = 0;


        for(int i = 0; i < l; i++)
        {
            scanf("%d", &speed[i]);

            if(speed[i] < 10){level = i}
        }



    }

    return 0;
}