#include<stdio.h>
#include<string.h>

int main(void){

    //float a, b, c, d, e, f;

    float a[6];
    for(int i=0; i<6; i++)
    {
        scanf("%f",&a[i]);
    }
    //printf("%f\n %f\n %f\n %f\n %f\n %f\n", a[0], a[1], a[2], a[3], a[4], a[5]);

    float b[10];
    int k = 0;
    for(int j=0; j<6; j++)
    {
        if(a[j]>0)
        {
            b[k]=a[j];
            k++;
        }
    }

    float n = 0;
    int m = sizeof(b);

    //printf("\n%.3f\n\n", m);

    for(int l=0; l < m; l++)
    {
        n = n + b[l];
    }
    //printf("\n%.3f\n\n", n);

    float avg = n / m;

    printf("%d valores positivos\n", k);
    printf("%.1f\n", avg);

return 0;
}
