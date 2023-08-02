#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int id;
    float cgpa;
    struct adress
    {
        int zipcode;
    }adr;
}student;

int main(void)
{
    student st;

    st.id = 101;
    st.cgpa = 3.5;
    st.adr.zipcode = 2015;

    printf("%d %f %d\n", st.id, st.cgpa, st.adr.zipcode);

    return 0;
}