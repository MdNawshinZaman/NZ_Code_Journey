#include<cs50.h>
#include<stdio.h>

int main(void)
{
    /*starting while loop

    while (1)
    {
        printf("Meow. \n");
    }*/ //this part will run forever

    int counter = 0;
    while(counter < 5)
    {
        printf("meow.\n");
        counter++;  // "counte = counter + 1" , "counter += 1" , "counter++" all are same
    }
    return 0;

}