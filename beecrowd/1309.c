#include<stdio.h>
#include<string.h>

int main(void)
{
    char temp[15];
    long long int n, m;
    while(scanf("%lld %lld", &n, &m) != EOF)
    {
        sprintf(temp, "%lld", n);
        int len = strlen(temp);

        for(int i = 0; i < len; i++)
        {
            printf("%c", temp[i]);
            if ()
        }

    }


    return 0;
}