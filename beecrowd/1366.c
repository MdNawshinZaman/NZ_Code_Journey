//incomplete

#include <stdio.h>
#include <math.h>


int main(void)
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        if (n == 0) break;

        int sum = 0, c, v;
        for(int i = 0; i < n; i++)
        {
            scanf("%d %d", &c, &v);
            sum += v/2;
        }
        printf("%d\n", sum/2);
    }



    return 0;
}