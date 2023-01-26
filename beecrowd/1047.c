#include<stdio.h>
#include<math.h>

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
// I have the time in hour. now I have to convert that in hour and min
    H = trunc(time);
    M = time - H;
    M = round(M*60);

    printf("O JOGO DUROU %.lf HORA(S) E %.lf MINUTO(S)\n",H, M);

    return 0;

}

// This code  taught me about the usage of trunc() funtion   :)