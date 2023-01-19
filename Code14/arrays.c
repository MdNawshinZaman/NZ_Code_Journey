#include<cs50.h>
#include<stdio.h>

int main(void)
{
    string name = get_string("What is your name? ");
    printf("Hello, %s\n",name);
}
//this program does not run in CodeBlocks. it will run in cs50.io
//"clang -o arrays arrays.c -lcs50" this is the command I used to compile this code in cs50 IDE
