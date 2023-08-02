#include<stdio.h>
#include<stdlib.h>

typedef struct Employee
{
    int id;
    char name[50];
    struct Salary
    {
        float sal;
    }s;
    struct Employee *next;
}employee;

int main(void)
{
    employee *head, *temp;
    head = (employee *)malloc(sizeof(employee));
    temp = head;

    int n;
    printf("How many employee: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Employee ID: ");
        scanf("%d", &head -> id);

        getchar();
        printf("Employee Name: ");
        scanf("%[^\n]s", head -> name);

        printf("Employee Salary: ");
        scanf("%f", &head -> s.sal);

        head -> next= (employee *)malloc(sizeof(employee));
        head = head -> next;
    }
    head -> next =  NULL;
    head = temp;

    while(head -> next != NULL)
    {
        printf("%d %s %.2f\n", head -> id, head -> name, head -> s.sal);
    }

    return 0;
}