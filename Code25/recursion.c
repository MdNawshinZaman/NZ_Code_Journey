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
    if (n <= 0) // used <= so that if my user gives me a negative number, my code doesn't show an error
    {
        return;
    }
    draw(n-1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}