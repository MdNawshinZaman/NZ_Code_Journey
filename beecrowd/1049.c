#include<stdio.h>

int main(void){

    char n1[20], n2[20], n3[20];
    scanf("%s %s %s",&*n1, &*n2, &*n3);

    if(strcmp(n1,"vertebrado") == 0)
    {
        if(strcmp(n2,"ave") == 0)
        {
            if(strcmp(n3,"carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if(strcmp(n3,"onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if(strcmp(n2,"inseto") == 0)
        {
            if(strcmp(n3,"hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if(strcmp(n3,"hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }
    //printf("%s\n",n1);
    //printf("%s\n",n2);
    //printf("%s\n",n3);

    return 0;
}