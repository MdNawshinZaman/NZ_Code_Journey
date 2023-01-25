#include<stdio.h>

int main(void){
    int a, b, t1, t2, time;
    scanf("%d %d", &a, &b);

    t1 = 24-a;
    t2 = b;
    time = t1+t2;

    printf("O JOGO DUROU %d HORA(S)\n",time);
}