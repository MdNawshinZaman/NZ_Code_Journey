/*
1. value <= 127 is black
2. valude > 127 is white
*/

#include<stdio.h>

int main(void)
{
    while(1)
    {
        int n;
        scanf("%d", &n);

        if(n == 0){break;}

        for(int i = 0; i < n; i++)
        {
            int a = 0, b = 0, c = 0, d = 0, e = 0;
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

            //<= 127 is black, >= 127 is white

            a = (a <= 127)? 1 : 0;
            b = (b <= 127)? 1 : 0;
            c = (c <= 127)? 1 : 0;
            d = (d <= 127)? 1 : 0;
            e = (e <= 127)? 1 : 0;

            if()
        }
    }

    return 0;
}