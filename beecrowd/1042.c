#include<stdio.h>

int main(void){
    int a, b, c, A, B, C;
    scanf("%d %d %d", &a, &b, &c);

     A = (a + b + abs(a-b))/2;
     A = (A + c + abs(A-c))/2;

    return 0;
}