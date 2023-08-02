#include<stdio.h>
#include<stdlib.h>

typedef struct adress
{
    int zipcode;
}adr;

typedef struct Student
{
    int id;
    float cgpa;
    adr address;
    struct Student *next;
}student;

int main(void)
{
    int n, i;
    student *head, *temp;
    head = (student *) malloc(sizeof(student));
    temp = head;

    printf("Enter the number of student: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter id: ");
        scanf("%d", &head -> id);

        printf("Enter cgpa: ");
        scanf("%f", &head -> cgpa);

        printf("Enter zipcode: ");
        scanf("%d", &head -> address.zipcode);

        head -> next = (student *)malloc(sizeof(student));
        head = head -> next;
    }

    head -> next = NULL;

    head = temp;

    while(head -> next != NULL)
    {
        printf("%d %f %d\n", head->id, head->cgpa, head->address.zipcode);
        head = head -> next;
    }

    return 0;
}