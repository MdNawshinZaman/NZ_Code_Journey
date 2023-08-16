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

        int z = (len % 3) - 1;
        if(z < 0) z = 2;

        printf("$");
        for(int i = 0; i < len; i++)
        {
            printf("%c", temp[i]);
            if(i == z && i != len-1)
            {
                printf(",");
                z+=3;
            }
        }
        printf(".");
        printf("%02lld\n", m);
    }


    return 0;
}