#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        char a[1009], b[1009];
        fflush(stdin);
        scanf("%s", a);
        fflush(stdin);
        scanf("%s", b);

        int p = strlen(a), q = strlen(b);
        char comp1[1009], comp2[1009];

        if(q > p) {printf("nao encaixa\n");}
        else
        {
            int r = 0;
            for(int j = p-1; j > p-q-1; j--)
            {
                comp1[r] = a[j];
                r++;
            }
            comp1[r] = '\0';

            r = 0;
            for(int j = q - 1; j >= 0; j--)
            {
                comp2[r] = b[j];
                r++;
            }
            comp2[r] = '\0';

            if(strcmp(comp1, comp2) == 0) printf("encaixa\n");
            else printf("nao encaixa\n");
        }
    }

    return 0;
}