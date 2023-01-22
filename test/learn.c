#include <stdio.h>

int main() {

    //N=140153
    int N, h, m, s;
    scanf("%d",&N);

    h = N / 3600; // h = 38
    N = N - (h*3600);//N=3353
    m = N / 60; // m=55
    N = N - (m*60); //N=53
    s = N;//s=53

    printf("%d:%d:%d\n",h,m,s);

    return 0;
}