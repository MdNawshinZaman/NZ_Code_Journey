#include<stdio.h>
int main(void)
{
    int a=4;
    float b=5.5678;
    double c=10.543567;
    char ch = 'a';


    printf("Integer = %d\n",a);
    printf("Float = %.2f\n",(int)(b*100)/100.0);
    printf("Double = %.4lf\n",(int)(c*10000)/10000.0);
    printf("Chareacter = %c\n",ch);

    return 0;
}