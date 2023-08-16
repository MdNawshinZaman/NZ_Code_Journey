#include<stdio.h>
#include<string.h>

int main(void)
{
    char temp[15];
    long long int n, m;
    while(scanf("%lld %lld", &n, &m) != EOF)
    {
        sprintf(temp, "%lld", n);
        printf("$");
        int len = strlen(temp);
        int num_comma = ceil(len / 3.0) - 1;

        char num[15] = {'\0'};
        int i = len - 1;
        int j = 0;
        while(i >= 0)
        {
            num[j] = temp[i];
            j++;
        }
    }


    return 0;
}