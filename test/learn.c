#include<stdio.h>
//#include<string.h>

int main(void)
{
    char name[50];
    //int len;
    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    //scanf("%s", name);

    /*fgets(name, 50, stdin);
    len = strlen(name);
    name[len-1] = '\0';*/
    printf("Hello, %s. How are you?\n\n", name);
    //printf("%d", len);
    return 0;
}
