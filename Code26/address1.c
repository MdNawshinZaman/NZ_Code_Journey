#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!"; // this line won't work without cs50.h
    char c = s[0];
    printf("%s\n",s);
}