#include <stdio.h>

int main() {

    int N;
    int time[3];
    scanf("%d",&N);

    for(int i = 0; i < 3; i++){
        time[i] = N % 60;
        int m = N %60;
        N = N - m;
    }

    int j;
    for(j = 2; j >= 0; j--){
        printf("%d",time[j]);
        if(j > 0){
            printf(":");
        }
    }
    printf("\n");

    return 0;
}