#include<stdio.h>

int main(void){
    double N;
    scanf("%lf",&N);

    int note[6] = {100, 50, 20, 10, 5, 2};
    float coin[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    int nota[6], moeda[6];
    for(int i = 0; i < 6; i++)
    {
        nota[i] = N / note[i];
        N = N -(nota[i] * note[i]);
    }

    for(int j = 0; j < 6; j++)
    {
        moeda[j] = N / coin[j];
        N = N - (moeda[j] * coin[j]);
    }
    printf("%f\n",moeda[4]);
    return 0;
}