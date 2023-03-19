#include<stdio.h>

int main(void)
{
    int num, big = 0, position;

    int i = 1;
    while(i <= 100)
    {
        scanf("%d", &num);

        if(big < num)
        {
            big = num;
            position = i;
        }
        i++;
    }

    printf("%d\n%d\n", big, position);

    return 0;
}