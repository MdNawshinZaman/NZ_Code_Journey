#include <stdio.h>

int main(void)
{
    int q = 0, d = 0, p = 0;
    while(1)
    {
        scanf("%d", &q);
        if(q == 0) break;
        scanf("%d %d", &d, &p);
        int page = (d*p*q) / (p-q);

        if(page > 1)
        {
            printf("%d paginas\n", page);
        }
        else
        {
            printf("%d pagina\n", page);
        }
    }
    return 0;
}
