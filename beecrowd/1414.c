#include <stdio.h>

int main(void)
{
    int t, n;
    while(1)
    {
        scanf("%d %d%*c", &t, &n);
        if(t == 0) break;

        char name[15];
        int temp, sum = 0;
        for(int i = 0; i < t; i++)
        {
            scanf("%s %d%*c", name, &temp);
            sum += temp;
        }

        printf("%d\n", (n*3) - sum);
    }


    return 0;
}
