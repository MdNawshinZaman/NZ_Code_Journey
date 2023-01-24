#include<stdio.h>

int main(void){
    int a, b, c, temp=0;
    scanf("%d %d %d", &a, &b, &c);

    //input 7 21 -14
    // input_2 21 7 -14

    if(a>b){temp=a; a=b; b=c; c=temp;} // temp=0, a=7, b=24, c=-14   // temp=21, a=7, b=-14, c=21
    if(a>c){temp=a; a=b; b=c; c=temp;} //temp=7, a=24, b=-14, c=7   //temp=21, a=7, b=-14, c=21
    if(b>c){temp=a; a=b; b=c; c=temp;}

    return 0;
}