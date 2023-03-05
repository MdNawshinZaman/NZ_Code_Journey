#include<stdio.h>
#include<math.h>
#define PI 3.1415
#define int long long int

int main(void)
{
    int R, L;
    double volume;
    scanf("%lld %lld", &R, &L);

    volume = ((float)4/3) * PI * pow(R , 3);

    return 0;
}