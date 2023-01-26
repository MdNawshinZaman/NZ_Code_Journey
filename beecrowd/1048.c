#include<stdio.h>
#include<math.h>

int main(void){

    float salary, S=0.0, extra;
    int perc;
    char c='%';
    scanf("%f",&salary);

    if (salary>=0 && salary<=400.00) {S=salary*1.15;} //S = salary + (salary * .15)
    else if (salary>=400.01 && salary<=800.00) {S=salary*1.12;}
    else if (salary>=800.01 && salary<=1200.00) {S=salary*1.10;}
    else if (salary>=1200.01 && salary<=2000.00) {S=salary*1.07;}
    else if (salary>2000.00) {S=salary*1.04;}
//now I have the Readjusted salary ammount in S;

    extra = S - salary;
    perc = round((extra/salary)*100);

    printf("Novo salario: %.2f\n",S);//ok
    printf("Reajuste ganho: %.2f\n",extra);//ok
    printf("Em percentual: %d %c\n",perc, c);//ok

    return 0;
}

//This code helped me to remember the application of percentage   :)