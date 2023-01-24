#include<stdio.h>

int main(void){
    int a, b, c, temp=0;
    scanf("%d %d %d", &a, &b, &c);


    // input 21 7 -14

    if(a>b){temp=a; a=b; b=c; c=temp;}    //temp=27, a=, b=, c=
    if(a>c){temp=a; a=b; b=c; c=temp;}    //temp=, a=, b=, c=
    if(c>b){temp=b; b=c; c=temp;}           //temp=, a=, b=, c=

    return 0;
}