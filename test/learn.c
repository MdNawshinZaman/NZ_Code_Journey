#include<stdio.h>
#include<math.h>

int main(void){
    float N;
    scanf("%f",&N);

    int note[6] = {100, 50, 20, 10, 5, 2};
    float coin[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    int nota[6], moeda[6];
    for(int i = 0; i < 6; i++)
    {
        nota[i] = N / note[i];
        N = N -(nota[i] * note[i]);
    }

    for(int j = 0; j < 5; j++)
    {
        moeda[j] = N / coin[j];
        N = N - (moeda[j] * coin[j]);
    }
    //printf("%.2f\n",N);
    //printf("%f\n", N/0.01);

    printf("NOTAS:\n");
    for(int k = 0; k < 6; k++)
    {
        printf("%d nota(s) de R$ %d.00\n", nota[k], note[k]);
    }

    printf("MOEDAS:\n");
    for(int l = 0; l < 6; l++)
    {
        printf("%d moeda(s) de R$ %.2f\n", round(moeda[l]), coin[l]);
    }


    return 0;
}