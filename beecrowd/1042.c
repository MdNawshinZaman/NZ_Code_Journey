#include<stdio.h>

int main(void){
    int a, b, c, temp=0;
    scanf("%d %d %d", &a, &b, &c);


    // input 7 21 -14

    if(a>b){temp=a; a=b; b=temp;}    //temp=0, a=7, b=21, c=-14
    if(a>c){temp=a; a=b; b=c; c=temp;}    //temp=7, a=21, b=-14, c=7
    if(b>c){temp=b; b=c; c=temp;}         //temp=, a=, b=, c=
//a<b<c
    return 0;
}