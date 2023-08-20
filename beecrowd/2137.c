#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int n, arr[10009], temp;
    while(scanf("%d", &n) != EOF)
    {
        for(int i = 0; i < 10009; i++)
        {
            arr[i] = 0;
        }

        for(int i= 0; i < n; i++)
        {
            scanf("%d", &temp);
            arr[temp] = 1;
        }

        for(int i= 0; i < 10009; i++)
        {
            if(arr[i] == 1)
            {
                printf("%04d\n", i);
            }
        }
    }

    return 0;
}