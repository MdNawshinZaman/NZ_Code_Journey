#include<stdio.h>
#include<math.h>

int main(void)
{
    float n;
    scanf("%f", &n);

    float notes[] = {100, 50, 20, 10, 5, 2}, coins[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int notas[6], moedas[6];

    for(int i = 0; i < 6; i++)
    {
        notas[i] = n / notes[i];
        n -= (notas[i] * notes[i]);
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%f ", n);
        moedas[i] = n / coins[i];
        n -= (moedas[i] * coins[i]);
    }
    printf("\n");

    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++)
    {
        printf("%d nota(s) de R$ %.2f\n", notas[i], notes[i]);
    }

    printf("MOEDAS:\n");
    for(int i = 0; i < 6; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n", moedas[i], coins[i]);
    }

    return 0;
}