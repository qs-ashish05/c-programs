#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node *link;
};


void display(struct node *head){
    struct node *temp = head;

    if (temp == NULL){
        printf("The given linked List is empty");
        return 0;
    }

    while (temp != NULL)
    {
        printf("The data of the node is - %d\n", temp->data);
        temp = temp->link;
    }
    
}

int counNodes(struct node *head){
    struct node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }

    return count; 
}

int main(int argc, char const *argv[])
{
    struct node *head = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *second_node = (struct node *)malloc(sizeof(struct node));
    second_node->data = 98;
    head->link = second_node;

    struct node *third_node = (struct node *)malloc(sizeof(struct node));
    third_node->data = 30;
    second_node->link = third_node;



    // solution of problem 3
    struct node *fourth_node = (struct node*)malloc(sizeof(struct node));
    fourth_node->data = 50;
    third_node->link = fourth_node;
    fourth_node->link = NULL;


    display(head);

    int count1 = counNodes(head);
    printf("Total number of nodes present in linked list %d", count1);

    return 0;
}
