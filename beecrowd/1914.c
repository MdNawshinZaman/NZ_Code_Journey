#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d%*c", &n);

    char name1[50], name2[50], ch1[10], ch2[10];
    long long int sum, n, m;
    for (int i = 0; i < n; i++)
    {
        scanf("%s%*c%s%*c%s%*c%s%*c", name1, ch1, name2, ch2);
        scanf("%d%*c%d%*c", &n, &m);

        if(((n+m) % 2 == 0))
        {
            if(strcmp(ch1, "PAR") == 0)
            {
                printf("%s\n", name1);
            }
            else
            {
                printf("%s\n", name2);
            }
        }
        else
        {
            if(strcmp(ch1, "IMPAR") == 0)
            {
                printf("%s\n", name1);
            }
            else
            {
                printf("%s\n", name2);
            }
        }
    }

    return 0;
}