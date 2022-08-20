#include <stdio.h>
#include <stdlib.h>
/*
A list of basic linked list operations:
1. Traversal :access each element of the linked list
2. Insertion : adds a new element to the linked list
3. Deletion : removes the existing elements
4. Search : find a node in the linked list
5. Sort : sort the nodes of the linked list
*/

struct node{
    int data;
    struct node *next;
}Link;

void traversal(struct node* head);



int main(){
    struct node* head=NULL;

    return 0;
}

void traversal(struct node* head){
    struct node *temp = head;
    printf("List elements are - \n");
    while(temp != NULL){
        printf("%d -->",temp->data);
        temp = temp->next;
    }
    free(temp);
}

/*add elements to either the beginning, middle or the wnd of the linked list*/
/*insert at the beginning*/
void insertAtBeginning(struct node* head, int value){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;//head node = new node
}

/*insert at the end*/
void insertAtEnd(struct node* head, int value){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    struct node *temp=head;/*create a new pointer to find the final node*/
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
/*a structure pointer*/

/*insert at the middle*/
void insertAtMiddle(struct node* head,int position,int value){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    struct node *temp = head;
    for(int i=0;i< ){
        temp
    }

}

/*reference: https://www.programiz.com/dsa/linked-list-operations */