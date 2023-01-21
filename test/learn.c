#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void){
    string s = get_string("Before: ");
    printf("After:  ");

    for(int i = 0, j = strlen(s); i < j; i++)
    {
        if(s[i] >= 97 && s[i] <= '122')
        {
            printf("%c",s[i]-32);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");

    char c = 'z';
    printf("%i\n",c);
    return 0;
}
