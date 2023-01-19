#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int x = get_int ("x: ");
    int y = get_int ("y: ");
float z = (float) x/ (float) y; //এখানে x and y এর সামনে () এর মধ্যে float লেখার মাধ্যমে এটা বুঝায় যে,
                                //আমার user input গুলো int value হলেও output value গুলো float type এরও হতে পারে।
                                // () এর ভিতরে float না লিখলে, ভাহ করার পর ভাগফলে যদি কোন floating value থাকতো, তবে তা হারিয়ে যেতো।

    printf("value of z is: %.3f\n", z);
    return 0;
}
