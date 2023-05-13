#include <stdio.h>

int main(void)
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if ((a + b + c == 0) || (a + b + c == 3))
        {
            printf("*\n");
        }
        else if (a + b + c == 1)
        {
            if (a == 1){printf("A\n");}
            else if (b == 1){printf("B\n");}
            else (c == 1){printf("C\n");}
        }
        else if (a + b + c == 2)
        {
            if (a == 0){printf("A\n");}
            else if (b == 0){printf("B\n");}
            else (c == 0){printf("C\n");}
        }
    }

    return 0;
}