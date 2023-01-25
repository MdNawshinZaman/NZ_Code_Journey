#include<stdio.h>

int main(void){
    int h1, m1, h2, m2;
    float t1, t2, time;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    t1 = h1 + (m1/60.0);
    t2 = h2 + (m2/60.0);

    if(t2-t1<=0){
        t1 = 1440 - t1;
        time = t1 + t2;
    }
    else{
        time = t2 - t1;
    }

    printf("%f\n",time);

}