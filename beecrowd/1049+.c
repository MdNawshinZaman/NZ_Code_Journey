#include<stdio.h>
#include<string.h>

int main(void){

    char n1[20], n2[20], n3[20];
    scanf("%s %s %s",&*n1, &*n2, &*n3);

    strcmp(n1,"vertebrado")==0 ?\

    /*start-n2.a*/ (strcmp(n2,"ave")==0? /*s-n3.a*/(strcmp(n3,"carnivoro")==0? printf("aguia\n"):(printf("pomba\n")))/*end-n3.a*/:\
    /*s-n3.b*/(strcmp(n3,"onivoro")==0? printf("homem\n"):(printf("vaca\n")))/*e-n3.b*/)/*finish n2.a*/:\

    /*start-n2.b*/(strcmp(n2,"inseto")==0? /*s-n3.a*/(strcmp(n3,"hematofago")==0? printf("pulga\n"):(printf("lagarta\n")))/*end-n3.a*/:\
    /*s-n3.b*/(strcmp(n3,"hematofago")==0? printf("sanguessuga\n"):(printf("minhoca\n")))/*e-n3.b*/)/*finish-n2.b*/;

    return 0;
}
