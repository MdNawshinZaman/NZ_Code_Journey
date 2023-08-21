#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int n;
    scanf("%d", &n);

    unsigned int temp;
    for(int j = 0; j < n; j++)
    {
        scanf("%u", &temp);
        int flag = 1;
        for(int i = 2; i <= sqrt(temp); i++)
        {
            if(temp % i == 0)
            {
                flag = 0;
                break;
            }
        }

        printf("%s\n", (flag == 1)? "Prime":"Not Prime");
    }

    return 0;
}