#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char m[11];
    int flag = 0;
    while(scanf("%d %s", &n, m) != EOF)
    {
        if(flag == 1)printf("\n");
        else flag = 1;

        int sum = 0;
        for(int i = 0; i <  n; i++)
        {
            sum += atoi(m[i]);
        }

        if(sum % 3 == 0) printf("%d sim", sum);
        else printf("%d nao", sum);

    }

    return 0;
}