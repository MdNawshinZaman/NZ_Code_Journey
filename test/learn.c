#include<stdio.h>

int main(void){
    int a=2, b=3, c=4, d=1;
    float n1, n2, n3, n4,n5, avg;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);



    avg = (n1*a + n2*b + n3*c + n4*d)/(a+b+c+d);

    printf("Media: %.1f\n",avg);

    if(avg >= 7.0){
        printf("Aluno em exame.\n");
    }
    else if(avg < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if(avg >= 5.0 && avg <= 6.9)
    {
        printf("Aluno em exame.\n");
    }

    if(avg >= 5.0)
    {
        scanf("%f",&n5);
        printf("Nota do exame: %.1f",n5);
    }



    return 0;

}