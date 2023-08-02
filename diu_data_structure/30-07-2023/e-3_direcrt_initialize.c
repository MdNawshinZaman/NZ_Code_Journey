#include<stdio.h>
#include<stdlib.h>

typedef struct adress
{
    int zipcode;
}adr;

typedef struct student
{
    int id;
    float cgpa;
    adr address;
}student;

int main(void)
{
    student st = {100, 3.5,{2015}};

    printf("%d %f %d\n", st.id, st.cgpa, st.address.zipcode);

    return 0;
}