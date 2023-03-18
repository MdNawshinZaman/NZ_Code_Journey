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

    int big = 0, small = 0, my_num = num[0];

    for(int i = 1; i < n; i++)
    {
        if(num[i] > my_num)
        {
            big++;
        }
        else if(num[i] < my_num)
        {
            small++;
        }
    }

    printf("%d\n%d\n", big, small);

    return 0;
}