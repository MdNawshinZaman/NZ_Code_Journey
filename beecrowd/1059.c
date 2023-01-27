#include<stdio.h>

int mian(void){

    for(int i = 0, n = 2; i<50; i++, n +=2){
        printf("%d\n",n);
    }

    return 0;
}