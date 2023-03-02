// this code runs in CodeBlocks but does't run in cs50.io
//Most probably the gets() function is out dated now because of its security threats

#include<stdio.h>

int main(void)
{
    char s1[50];
    printf("Please enter your name: ");
    gets (s1);
    printf("Welcome abroad, %s. Hope we will pass a great time together!", s1);
}