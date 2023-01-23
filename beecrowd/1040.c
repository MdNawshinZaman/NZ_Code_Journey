#include <stdio.h>

int main(void){
    float a, b, c, d, avg;
    scanf("%f%f%f%f", &a, &b, &c, &d);

    a = a * 2;
    b = b * 3;
    c *= 4;
    d *= 1;

    avg = (a+b+c+d)/10;

    printf("%f",c);
    printf("%f",avg);


    return 0;
}