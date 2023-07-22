#include<stdio.h>

int main(void)
{
    int a, b, c, x, y, z;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z);

    int sum = 0;

    if(x > a){sum += x - a;}
    if(y > b){sum += y - b;}
    if(z > c){sum += z - c;}

    printf("%d\n", sum);
    return 0;
}