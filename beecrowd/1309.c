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
        int num_comma = ceil(len / 3.0) - 1;

        char num[15] = {'\0'};

        while(num_comma)
        {
            
        }
    }


    return 0;
}