#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int x;
    float y;
    struct Node *pt;
}node;

int main(void)
{
    int n;
    printf("How many nodes? ");
    scanf("%d", &n);

    /*
    ///this is a structure type dynamic array
    node *head;
    head = (node *)  malloc (n * sizeof(node));

    for(int i = 0; i < n; i++)
    {
        printf("X%d: ",i+1);
        scanf("%d", &head[i].x);
        printf("Y%d: ",i+1);
        scanf("%f", &head[i].y);
    }

    for(int i = 0; i < n; i++)
    {
        printf("X%d = %d\n", i, head[i] . x);
        printf("X%d = %f\n", i, head[i] . y);
        printf("\n");
    }
    */

    node *head, *temp;
    head = (node *)malloc(sizeof(node));
    temp = head;
    for(int i = 0; i < n; i++)
    {
        printf("Enter x: ");
        scanf("%d", &head -> x);

        printf("Enter y: ");
        scanf("%f", &head -> y);

        head -> pt = (node *)malloc(sizeof(node));
        head = head -> pt;
    }
    head -> pt = NULL;
    head = temp;
    while(head -> pt != NULL)
    {
        printf("%d %f\n", head -> x, head -> y);
        head = head -> pt;
    }
    free(head);
    return 0;
}