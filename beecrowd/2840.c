#include<stdio.h>
#include<math.h>
#define PI 3.1415
#define int long long int

int main(void)
{
    int R, L, balloon_num;
    double volume;
    scanf("%lld %lld", &R, &L);

    volume = ((float)4/3) * PI * pow(R , 3);
    balloon_num = floor(L / volume);

    printf("%d", balloon_num);

    return 0;
}