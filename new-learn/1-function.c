#include <stdio.h>
void hi_me(void);
int get_sum(int x, int y);

int main(void)
{
    hi_me();
    int x, y, sum;
    scanf("%d %d", &x, &y);
    sum = get_sum(x, y);
    printf("sum = %d\n", sum);

    return 0;
}

int get_sum(int x, int y)
{
    return x + y;
}

void hi_me(void)
{
    printf("Hi!\nPlease put 2 numbers with a space between them: c");
}