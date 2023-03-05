#include<stdio.h>
#include<math.h>
#define PI 3.1415

int main(void)
{
    #define int long long int

    int R, L, balloon_num;
    double volume;
    scanf("%lld %lld", &R, &L);

    volume = ((float)4/3) * PI * pow(R , 3);
    balloon_num = floor(L / volume);

    printf("%lld\n", balloon_num);

    return 0;
}

//first time used #define in my life.