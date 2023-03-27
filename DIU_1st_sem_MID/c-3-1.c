#include<stdio.h>

int main()
{
    char a = '9';
    while(a > '0'){
        int b = --a;
        printf("a \"%c\" & b\"%05d\"\n", b, a);
        if(a-- == '7')break;
    }

    return 0;
}