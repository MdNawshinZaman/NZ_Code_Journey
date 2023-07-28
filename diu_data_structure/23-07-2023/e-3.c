#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int id;
    float cgpa;
    struct student *pt;
}s;

int main(void)
{
    int n;
    printf("How many students?\n");
    scanf("%d", &n);

    s *head, *temp;
    head = (s *)malloc(sizeof(s));
    temp = head;

    for(int i = 0; i < n; i++)
    {
        printf("Taking Info of Student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &head -> id);

        printf("CGPA: ");
        scanf("%f", &head -> cgpa);

        head -> pt = (s*) malloc (sizeof(s));
        head = head -> pt;
    }
    head -> pt = NULL;
    head = temp;


    int i = 1;
    while(head -> pt != NULL)
    {
        printf("ID and CGPA of student%d is: %d %.2f\n", i, head -> id, head -> cgpa);
        i++;
        head = head -> pt;
    }

    free(head);
    return 0;
}