#include<stdio.h>

int main(void){
    int h1, m1, h2, m2;
    double t1, t2, time, H, M;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    t1 = h1 + (m1/60.0);
    t2 = h2 + (m2/60.0);

    if(t2-t1<=0){
        t1 = 24 - t1;
        time = t1 + t2;
    }
    else{
        time = t2 - t1;
    }

    H =

    printf("%lf\n",time);

}