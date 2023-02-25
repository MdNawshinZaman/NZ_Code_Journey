#include<stdio.h>

int main(void)
{
    int n, num = 0, smallest, position;
    scanf("%d", &n);
    int hit[n];


    while(num < n)
    {
        scanf("%d", &hit[num]);
        num++;
    }

    smallest = hit[0];
    position = 0;

    for(int i = 1; i < n; i++)
    {
        if(hit[i] < smallest)
        {
            smallest = hit[i];
            position = i;
        }
    }

    printf("%d\n", position+1);

    return 0;
}