#include<stdio.h>


int main(void){
    int a, b, t1, t2, time;
    scanf("%d %d", &a, &b);

    a = (a+b+abs(a-b))/2;

    t1 = 24-a;
    t2 = b;
    time = t1+t2;

    printf("O JOGO DUROU %d HORA(S)\n",time);
}