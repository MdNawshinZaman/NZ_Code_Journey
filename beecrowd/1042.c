#include<stdio.h>

int main(void){
    int A, B, C, a, b, c, temp=0;
    scanf("%d %d %d", &A, &B, &C);

    a=A;
    b=B;
    c=C;

    if(a>b){temp=a; a=b; b=temp;}
    if(a>c){temp=a; a=c; c=temp;}
    if(b>c){temp=b; b=c; c=temp;}

    // I will get a<b<c

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a,b,c,A,B,C);

    return 0;
}