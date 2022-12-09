 #include <stdio.h>


 int main(void)
 {
    int n = 50;
    int *p = &n;

/*
    int *p = &n; // here the single &n refers the memory address on the value of n.
                  //the *(star) tells my computer that I am storing an address type integer in my new  variable called p
    printf("%p\n",p); // %p is a special formate code for printing address in C.

*/ // these 2 line of work can be done with a single line

    printf("%p\n", &n);
    printf("%i\n", *p); // this line shows us that what is there in the address that has been presureved in *p
 }