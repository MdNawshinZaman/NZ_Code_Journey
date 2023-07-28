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
    node *head;
    head = (node *)  malloc (sizeof(node));

    head -> x = 10;
    head -> y = 1.5;
    head -> pt = (node *)malloc(sizeof(node));
    head -> pt -> x = 13;
    head -> pt -> y = 2.7;
    head -> pt -> pt = NULL;

    printf("%d %f\n", head -> x, head -> y);
    printf("%d %f\n", head -> pt -> x, head -> pt -> y);

    return 0;
}