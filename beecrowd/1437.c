#include <math.h>
#include <stdio.h>

int main(void)
{
    int n;
    char str[1001];
    while (1)
    {
        scanf("%d%*c", &n);
        if (n == 0)
            break;

        scanf("%s%*c", str);

        int face = 1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'E')
            {
                face--;
                if (face < 1)
                    face = 4;
            }
            else if (str[i] == 'D')
            {
                face++;
                if (face > 4)
                    face = 1;
            }
        }

        switch (face)
        {
            case 1:
                printf("N\n");
                break;

            case 2:
                printf("L\n");
                break;

            case 3:
                printf("S\n");
                break;

            case 4:
                printf("O\n");
                break;
        }
    }

    return 0;
}