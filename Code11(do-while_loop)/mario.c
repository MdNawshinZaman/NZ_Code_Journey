#include<stdio.h>
#include<cs50.h>
// This is a Code of ASCII Art
//Lets learn do-while loop

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n<1);
    /*By using do-while loop, I can set a logic criteria.
    For Example, by using do-while loop in this code, I have easily set a Criteria that,
    if the user input a value is less than 1, then my code won't take the value instead, it
    will run the do-while loop and ask for a value again.

    If I had used "if()" to set my criteria and the input value was less than 1,
    my code would just finished without doing any thing. But now I can keep putting my value
    until I get my desired result!!

}