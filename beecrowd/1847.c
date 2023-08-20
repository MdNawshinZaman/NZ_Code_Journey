#include <stdio.h>

int main(void)
{
    int a, b, c, p1, p2;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && c > b) printf(":)\n");
    else if (a < b && c < b) printf(":(\n");
    else if (a < b)
    {
        p1 = b - a;
        p2 = c - b;
        if(p1 <= p2) printf(":)\n");
        else printf(":(\n");
    }
    else if (a > b)
    {
        p1 = a - b;
        p2 = b - c;
        if(p1 <= p2) printf(":(\n");
        else printf(":)\n");
    }
    else if(a == b)
    {
        if (b < c) printf(":)\n");
        else printf(":(\n");
    }


    return 0;
}