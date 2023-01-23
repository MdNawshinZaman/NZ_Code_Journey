#include <stdio.h>

int main(void){
    float a, b, c, d, e, avg, avg_f;
    scanf("%f%f%f%f", &a, &b, &c, &d);

    a = a * 2;
    b = b * 3;
    c *= 4;  // this is the new way I have learned.
    d *= 1;

    avg = 7.3//(a+b+c+d)/10;
    //printf("%.2f\n",c);
    //printf("%.2f\n",avg);
    printf("Media: %.1f\n",avg);

    if(avg >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if(avg >= 5.0 && avg <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);

        avg_f = (avg + e)/2.0;

        if(avg_f >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (avg_f<= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg_f);

    }


    return 0;
}