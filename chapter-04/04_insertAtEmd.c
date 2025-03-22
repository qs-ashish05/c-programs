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

// this logic will not be able to inser data to empty linked list,
// so your linked list should contain atleast one node
void inserAtEnd(struct node *head, int data){
    struct node *temp;
    temp = head;

    // craete node 
    struct node *newNode = NULL;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = newNode;
}

// The below logic can add new node to empty linked list as well 
void insertAtEnd2(struct node *head, int data){
    struct node *temp = head;

    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;

    if(temp == NULL){
        head = newNode;
        return;
    }

    else{
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = newNode; 
    }
}

int main(int argc, char const *argv[])
{
    struct node *head = NULL;
    
    insertAtEnd2(head, 100);
    display(head);

    return 0;
}
