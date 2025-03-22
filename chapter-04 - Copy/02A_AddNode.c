#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node *link;
};


void display(struct node *head){
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("The data of the node is - %d\n", temp->data);
        temp = temp->link;
    }
    
}

int main(int argc, char const *argv[])
{
    struct node *head = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *one_node = (struct node *)malloc(sizeof(struct node));
    one_node->data = 98;
    head->link = one_node;

    one_node = malloc(sizeof(struct node));
    one_node->data = 98;
    head->link->link = one_node;

    one_node = malloc(sizeof(struct node));
    one_node->data = 30;
    head->link->link->link = one_node;

    one_node = malloc(sizeof(struct node));
    one_node->data = 50;
    head->link->link->link->link = one_node;

    display(head);

    return 0;
}
