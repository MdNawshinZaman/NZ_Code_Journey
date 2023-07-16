#include<stdio.h>

struct student
{
    int id;
    float cgpa;
};

int main(void)
{
    int x;
    printf("Number of Students: ");
    scanf("%d", &x);
    struct student n[x];

    for(int i = 0; i < x; i++)
    {
        printf("ID: ");
        scanf("%d", &n[i].id);

        printf("CGPA: ");
        scanf("%f", &n[i].cgpa);
    }

    for(int i = 0; i < x; i++)
    {
        printf("ID: %d    CGPA: %.2f\n", n[i].id, n[i].cgpa );

    }

    return 0;
}