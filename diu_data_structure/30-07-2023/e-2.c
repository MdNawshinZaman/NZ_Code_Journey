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
    student st;

    st.id = 101;
    st.cgpa = 3.5;
    st.address.zipcode = 2015;

    printf("%d %f %d\n", st.id, st.cgpa, st.address.zipcode);

    return 0;
}