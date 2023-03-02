#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter the number you want to cheak: ");

    if (n%2 == 0) //n কে ২ দিয়ে ভাগ করে  ভাগশেষ যদি শুন্য হয়
    {
        printf("%i is an even number.\n", n);
    }
    else
    {
        printf("%i is an odd number.\n", n);
    }
    return 0;
}