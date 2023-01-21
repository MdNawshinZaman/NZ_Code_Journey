#include <stdio.h>

int main(void){

    int N;
    int note[]={100, 50, 20, 10, 5, 2, 1};
    int result[7];
    scanf("%d",&N);
    printf("%d\n",N);

    for(int i = 0; i < 7; i++){
        result[i] = N / note[i];
        N = N % note[i];
    }

    for(int j = 0; j < 7; j++){
        printf("%d nota(s) de R$ %d,00\n", result[j], note[j]);
    }

    return 0;
}