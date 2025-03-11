#include <stdio.h>
#include <stdlib.h>


//   HEAD --> | 1 | next| --> | 2 | next | --> | 3 | next | --> NULL

//create a node
struct node{
    int data;
    struct node *next;
};

void print_linkedlist(struct node *p);

int main(){
    
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    
    //allocate memory
    one = (struct node*)malloc(sizeof(struct node));
    two = (struct node*)malloc(sizeof(struct node));
    three = (struct node*)malloc(sizeof(struct node));
    
    //assign data
    one->data = 1;
    two->data = 2;
    three->data = 3;
    
    //connect the nodes
    one->next = two;
    two->next = three;
    three->next = NULL;
    
    //print node value
    head = one;
    print_linkedlist(head);
    
    return 0;
}

void print_linkedlist(struct node *p){
    //Traverse through the linked list
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}