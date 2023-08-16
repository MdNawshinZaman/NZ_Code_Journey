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

        char num[15];
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