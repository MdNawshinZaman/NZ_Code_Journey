#include<stdio.h>
#include<string.h>

int main(void){

    char n1[20], n2[20], n3[20];
    scanf("%s %s %s",&*n1, &*n2, &*n3);

    strcmp(n1,"vertebrado")==0 ? (strcmp(n2,"ave")==0? (strcmp(n3,"carnivoro")==0? printf("aguia\n")):(printf("pomba\n"));) \
    : (strcmp(n2,"ave")==0? (strcmp(n3,"carnivoro")==0? printf("aguia\n")):(printf("pomba\n")););

    return 0;
}