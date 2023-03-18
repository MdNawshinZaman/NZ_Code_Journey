#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int num[n];

    for(int i = 0; i < n ; i++)
    {
        scanf("%d", &num[i]);
    }

    int more = 0, less = 0, my_num = num[0];

    for(int i = 1; i < n; i++)
    {
        if(num[i] > my_num)
        {
            more++;
        }
        else if(num[i] < my_num)
        {
            less++;
        }
    }

    printf("%d\n%d\n",less, more);

    return 0;
}