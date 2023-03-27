#include<stdio.h>

int main()
{
    char a = '9';
    while(a < 101){
        int b = a++;
        printf("a \"%c\" & b\"%05d\"\n", b, a);
        if(a == 'f')break;
    }

    return 0;
}