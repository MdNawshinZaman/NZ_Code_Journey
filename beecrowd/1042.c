#include<stdio.h>

int main(void){
    int a, b, c, temp=0;
    scanf("%d %d %d", &a, &b, &c);


    // input_2 21 7 -14

    if(a>b){temp=a; a=b; b=c; c=temp;}    //temp=21, a=7, b=-14, c=21
    if(temp>b){temp=a; a=c; c=temp;}    //temp=7, a=21, b=-14, c=7
    if(b>c){temp=a; a=b; b=c:}    //temp=21, a=7, b=-14, c=21

    return 0;
}