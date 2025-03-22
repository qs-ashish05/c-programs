#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *link;
};


int main(int argc, char const *argv[])
{
    struct node *head = NULL;

    // allocate memory for the first node
    head = (struct node*) malloc(sizeof(struct node));

    // give data to the node 
    head->data = 45;

    // modify the address
    head->link = NULL;

    printf("the data of the linked list is %d", head->data);

    return 0;
}
