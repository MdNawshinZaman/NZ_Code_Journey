#include<stdio.h>

int main(void){

    float a[6];
    for(int i=0, i<6, i++){
        scanf("%f", &a[i]);
    }

    for(int j=0, k=0; j<6; j++){

        if(a[j]>0){
            k++;
        }
    }

    printf("&d valores positivos\n", k);

    return 0;
}