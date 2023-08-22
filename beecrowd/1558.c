#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sqrt_check(int n)
{
    double a = sqrt(n);
    int b = a;
    if (a == b) return 1;
    else return 0;
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int flag = 0;
        if(n == 0)
        {
            flag = 1;
        }
        else
        {

            for(int i = 0; i < sqrt(n); i++)
            {
                if(sqrt_check(abs(n-i*i)) == 1)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
