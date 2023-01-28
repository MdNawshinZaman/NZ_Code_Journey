#include<stdio.h>

int main(void){

    //float a, b, c, d, e, f;

    float a[6];
    for(int i=0; i<6; i++)
    {
        scanf("%f",&a[i]);
    }
    //printf("\n%f\n %f\n %f\n %f\n %f\n %f\n", a[0], a[1], a[2], a[3], a[4], a[5]);

    float b[10] ;
    int j, k=0;
    for(j=0; j<6; j++)
    {
        if(a[j]>0)
        {
            b[k]=a[j];
            k++;
        }
    }

    //printf("\n%.1f %.1f %.1f %.1f %.1f %.1f\n", b[0], b[1], b[2], b[3], b[4], b[5]);


    float n = 0;
    //this is wrong, I must not use this formula for this code.  //int m =(sizeof(b)/sizeof(b[0]));
    int m = k;

    //printf("\n%d\n\n", m);

    for(int l=0; l < m; l++)
    {
        n = n + b[l];
    }
    //printf("\n%.3f\n\n", n);

    float avg = n / m;

    printf("%d valores positivos\n", m);
    printf("%.1f\n", avg);

return 0;
}

// this code taught me the use of sizeof() function. but this was not necessary here/.
// My debug buddy for this code was Chat GTP... :)
