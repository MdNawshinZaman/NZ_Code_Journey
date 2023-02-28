#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int sheep[n],ref[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sheep[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ref[i] = sheep[i];
    }

    int attacked = 0;
    int non_stolen = 0;

    for (int j = 0;;)
    {
        if (sheep[j] % 2 != 0)
        {
            if(sheep[j] > 0){sheep[j] -= 1;}
            j += 1;
        }
        else if ((sheep[j] % 2) == 0)
        {
            if(sheep[j] > 0){sheep[j] -= 1;}
            j -= 1;
        }
        if ((j < 0) || (j >= n))
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (sheep[i] != ref[i])
        {
            attacked++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        non_stolen += sheep[i];
    }

    printf("%d %d\n", attacked, non_stolen);

    return 0;
}