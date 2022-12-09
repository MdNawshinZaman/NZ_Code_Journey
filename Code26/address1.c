#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!"; // this line works as --char *s = "HI!";-- // see the proof in address2.c
    char c = s[0];
    char *p = &c;
    printf("%p\n",s); // seeing the address of s
    printf("%p\n",p); // seeing the value of *p AKA the Address of c
}