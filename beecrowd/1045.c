#include<stdio.h>
#include<math.h>

int main(void){

    double a, b, c, temp;
    scanf("%lf %lf %lf", &a, &b, &c);

    //obj: a<b<c
    if(a>b){temp=a; a=b; b=temp;}
    if(a>c){temp=a; a=c; c=temp;}
    if(b>c){temp=b; b=c; c=temp;}

    //printf("%lf %lf %lf\n", a, b, c);

    if(a >= b+c){printf("NAO FORMA TRIANGULO\n");}
    else if(pow(a,2) == pow(b,2)+pow(c,2)){printf("TRIANGULO RETANGULO\n");}
    else if(pow(a,2) > pow(b,2)+pow(c,2)){printf("TRIANGULO OBTUSANGULO\n");}
    else if(pow(a,2) < pow(b,2)+pow(c,2)){printf("TRIANGULO ACUTANGULO\n");}
    else if(a == b == c){printf("TRIANGULO EQUILATERO\n");}
    else if(a==b!=c || a==c!=b || a!=b==c){printf("TRIANGULO ISOSCELES\n");}

    return 0;
}