#include <stdio.h>

int main() {

    char name[100];
    float salary, sale, total;

    scanf("%s",&name);
    scanf("%f %f", salary, sale);

    total = salary + sale*0.15;

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}