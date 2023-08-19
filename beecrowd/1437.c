#include <stdio.h>
#include <math.h>


int main(void)
{
    int n;
    char str[1001];
    while(1)
    {
        scanf("%d%*c", &n);
        if(n == 0) break;

        scanf("%s%*c", str);

        int face = 1;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'E')
            {
                face--;
                if(face < 1) face = 4;
            }
            else if(str[i] == 'D')
            {
                face++;
                if (face > 4) face = 1;
            }
        }

        switch(face)
        {
            case 1:
            printf("")
        }

    }

    return 0;
}