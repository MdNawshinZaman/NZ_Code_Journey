#include<stdio.h>

int main(void)
{

    int x,n;
    scanf("%d", &x);

    if(x%2 == 0) {n = x+1;}
    else {n = x;}

    for(int i = 0; i < 6; i++)
    {
        printf("%d\n", n);
        n = n+2;
    }


    return 0;
}