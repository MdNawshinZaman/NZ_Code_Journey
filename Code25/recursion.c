#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw (int n)
{
    if (n == 0) // used <= so that if my user gives me a negative number, my code doesn't show an error
                // if we use the == instead of <=, then we will encounter a segmentation fault if our use inputs a negative number. 
    {
        return;
    }
    draw(n-1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    // this new draw fuction will draw a pyramid that has 1 line less than commanded, then will print an another row.
}