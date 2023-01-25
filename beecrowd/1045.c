#include<stdio.h>
#include<math.h>

int main(void){

    double a, b, c, temp;
    scanf("%lf %lf %lf", &a, &b, &c);

    //obj: a<b<c
    if(a<b){temp=a; a=b; b=temp;}
    if(a<c){temp=a; a=c; c=temp;}
    if(b<c){temp=b; b=c; c=temp;}

    //printf("%lf %lf %lf\n", a, b, c);

    if(a >= b+c){printf("NAO FORMA TRIANGULO\n");}
    else{
        if(pow(a,2) == (pow(b,2)+pow(c,2))){printf("TRIANGULO RETANGULO\n");}
        if(pow(a,2) > (pow(b,2) + pow(c,2))){printf("TRIANGULO OBTUSANGULO\n");}
        if(pow(a,2) < (pow(b,2) + pow(c,2))){printf("TRIANGULO ACUTANGULO\n");}
        if(a == b && b == c){printf("TRIANGULO EQUILATERO\n");}
        if((a == b && a !=c) || (a == c && a !=b) || (b == c && b !=a)){printf("TRIANGULO ISOSCELES\n");}
    }
    
    return 0;
}

//this program taught me the differance of "if" and "else if" :)
//this also taught me the use of || and &&