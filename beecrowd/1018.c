#include <stdio.h>

int main() {

    int N, note[7]={100,50,20,10,5,2,1}, num[7];
    scanf("%d",&N);

    for(int i = 0; i < 7; i++)
    {
        num[i] = N / note[i];
        N = N - (note[i] * num[i]);
    }

    for(int j = 0; j < 7; j++)
    {
        printf("%d nota(s) de R$ %d,00", num[j], note[j]);
    }

    return 0;
}
