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

            int black = 0, ans = 0;

            if(a == 1){ans = 'A'; black++;}
            if(b == 1){ans = 'B'; black++;}
            if(c == 1){ans = 'C'; black++;}
            if(d == 1){ans = 'D'; black++;}
            if(e == 1){ans = 'E'; black++;}

            if(black == 1){printf("%c\n", ans);}
            else{printf("*\n");}
        }
    }

    return 0;
}