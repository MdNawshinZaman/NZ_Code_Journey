#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int rpm0, rpm_i;
    scanf("%d", &rpm0);

    int fall = 0;
    for(int i = 1; i < n; i++)
    {
        scanf("%d", &rpm_i);

        if(rpm_i < rpm0)
        {
            fall = i + 1;
            break;
        }
    }

    for(int i = 0, o = )
    return 0;
}