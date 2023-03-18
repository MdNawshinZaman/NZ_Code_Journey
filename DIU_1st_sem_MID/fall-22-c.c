#include<stfio.h>

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
        if(my_num < num[i])
        {
            
        }
    }


    return 0;
}