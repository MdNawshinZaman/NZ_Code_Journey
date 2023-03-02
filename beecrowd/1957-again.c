#include<stdio.h>

int main(void)
{
    unsigned long long int v;
    scanf("%llu", &v);

    int digit_num = 1;
    for(;;)
    {
        v = v / 10;
        if(v > 0){digit_num++;}
        if(v == 0){break;}
    }
    //printf("%d\n", digit_num);

    

    return 0;
}