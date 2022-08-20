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
void insertAtBeginning(struct node* head, int value);
void insertAtEnd(struct node* head, int value);
void insertAtMiddle(struct node* head,int position,int value);
void deleteFromBeginning(struct node* head);
void deleteFromMiddle(struct node* head,int position);
void deleteFromEnd(struct node* head);



int main(){
    struct node* head=NULL;/*head is a structure pointer, and I have to produce a memory space for it*/
    head = malloc(sizeof(struct node));/*here I add a head node for the link*/
    insertAtEnd(head, 2);
    insertAtBeginning(head, 3);
    insertAtMiddle(head,1,4);
    insertAtMiddle(head,2,5);
    insertAtMiddle(head,3,7);
    printf("Linked list:\n");
    traversal(head);
    deleteFromEnd(head);
    deleteFromBeginning(head);
    deleteFromMiddle(head,3);
    printf("\nAfter deleting an element:\n");
    traversal(head);
    
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
    return;
}

/*add elements to either the beginning, middle or the wnd of the linked list*/
/*insert at the beginning*/
void insertAtBeginning(struct node* head, int value){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;//head node = new node
    return;
}

/*insert at the end*/
void insertAtEnd(struct node* head, int value){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    struct node *temp= head;/*create a new pointer to find the final node*/
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}
/*a structure pointer*/

/*insert at the middle*/
void insertAtMiddle(struct node* head,int position,int value){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    struct node *temp = head;
    for(int i=0; i<position; i++){
        if(temp->next!=NULL){
            temp = temp->next;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return;
}

/*delete elements either from the beginning, end or middle*/
void deleteFromBeginning(struct node* head){
    head = head->next;
    return;
}

void deleteFromMiddle(struct node* head,int position){
    struct node *temp = head;
    for(int i=0; i<position; i++){
        if(temp->next!=NULL){
            temp = temp->next;
        }
    }
    temp->next = temp->next->next;/*do we need to free the memory of the node which is deleted?*/
    return;
}

void deleteFromEnd(struct node* head){
    struct node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    temp->next = NULL;
    return;
}


/*reference: https://www.programiz.com/dsa/linked-list-operations */