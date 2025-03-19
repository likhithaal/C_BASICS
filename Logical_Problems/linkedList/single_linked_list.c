#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void print_menu(void);
void display_list(struct node *head);
void free_list(struct node *head);
struct node* create_node(int data);
struct node* insert_at_begin(struct node *head,int val);
struct node* insert_at_end(struct node *head,int val);
struct node* insert_at_pos(struct node*head,int val,int pos);
struct node* insert_by_key(struct node *head,int val,int key);
struct node* delete_at_begin(struct node *head);
struct node* delete_at_end(struct node *head);
struct node* delete_at_pos(struct node *head,int pos);
struct node* delete_by_key(struct node *head,int key);
struct node* search_by_key(struct node *head,int key);

int main(){
    struct node *head = NULL;
    int data=0,position=0,choice=0,key=0;
    do{
        print_menu();
        printf("Enter your choice: \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter the data to be inserted at beginning: \n");
                scanf("%d",&data);
                head = insert_at_begin(head,data);
                break;
            case 2:
                printf("Enter the data to be inserted at end: \n");
                scanf("%d",&data);
                head = insert_at_end(head,data);
                break;
            case 3:
                printf("Enter the data to insert in specific pos: \n");
                scanf("%d",&data);
                printf("Enter the position to insert: \n");
                scanf("%d",&position);
                head = insert_at_pos(head,data,position);
                break;
            case 4:
                head = delete_at_begin(head);
                break;
            case 5:
                head = delete_at_end(head);
                break;
            case 6:
                printf("Enter the position to delete\n");
                scanf("%d",&position);
                head = delete_at_pos(head,position);
                break;
            case 7:
                printf("Enter the key: \n");
                scanf("%d",&key);
                printf("Enter the data to insert after the key\n");
                scanf("%d",&data);
                head = insert_by_key(head,data,key);
                break;
            case 8:
                printf("Enter the key to delete: \n");
                scanf("%d",&key);
                head = delete_by_key(head,key);
                break;
            case 9:
                printf("enter the key to search: \n");
                scanf("%d",&key);
                head = search_by_key(head,key);
                break;
            case 0:
                printf("Exiting.....\n");
                free_list(head);
                return 0;
            default:
                printf("Invalid option! enter valid choice\n");
                return -1;
        }
        display_list(head);
    }while(choice != 0);
    return 0;
}

void print_menu(void){
    printf("\n");
    printf("1. Insert at beginning\n");
    printf("2. Insert at end\n");
    printf("3. Insert at specific position\n");
    printf("4. Delete at beginning\n");
    printf("5. Delete at end\n");
    printf("6. Delete at specific position\n");
    printf("7. Insert by key\n");
    printf("8. Delete by key\n");
    printf("9. search by key\n");
    printf("0. Exit\n");
    printf("\n");
}

void display_list(struct node *head){
    if(head == NULL)
        printf("List is empty\n");
    while(head != NULL){
        printf("%d -> ",head->data);
        head = head->link;
    }
    printf("NULL\n");
}

void free_list(struct node *head){
    while(head != NULL){
        struct node *temp = head;
        head = head->link;
        free(temp);
    }
}

struct node* create_node(int data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->link = NULL;
    return new_node;
}

struct node* insert_at_begin(struct node *head,int val){
    struct node *new_node = create_node(val);
    new_node->link = head;
    return new_node;
}

struct node* insert_at_end(struct node *head,int val){
    struct node *new_node = create_node(val);
    if(head == NULL)
        return new_node;
    struct node *current_node = head;
    while(current_node->link != NULL){
        current_node = current_node->link;
    }
    current_node->link = new_node;
    return head;
}

struct node* insert_at_pos(struct node *head,int val, int pos){
    if(pos == 1)
        return insert_at_begin(head,val);
    struct node *current_node = head;

    for(int i=1;i<pos-1 && current_node != NULL;i++){
        current_node = current_node->link;
    }
    if(current_node == NULL){
        printf("Invalid position\n");
        return head;
    }

    struct node *newnode = create_node(val);
    newnode->link = current_node->link;
    current_node->link = newnode;
    return head;

}

struct node* delete_at_begin(struct node *head){
    if(head == NULL){
        printf("List is empty, nothing to delete\n");
        return head;
    }
    struct node *temp = head->link;
    free(head);
    return temp;
    
}

struct node* delete_at_end(struct node *head){
    if(head == NULL){
        printf("List is empty, nothing to delete\n");
        return head;
    }
    struct node *current = head;
    struct node *previous = NULL;
    while(current->link != NULL){
        previous = current;
        current = current->link;
    }
    previous->link = NULL;
    free(current);
    return head;
}

struct node* delete_at_pos(struct node *head,int pos){
    if(pos == 1)
        return delete_at_begin(head);
    struct node *current = head;
    struct node *previous = NULL;
    for(int i=1;i<pos && current != NULL;i++){
        previous = current;
        current = current->link;
    }
    if(current == NULL){
        printf("Invalid position\n");
        return head;
    }
    previous->link = current->link;
    free(current);
    return head;
}

struct node* insert_by_key(struct node *head,int val,int key){
    struct node *current = head;    
    while(current != NULL && current->data != key){
        current = current->link;
    } 
    if(current == NULL){
        printf("Key not found\n");
        return head;
    }
    struct node *new_node = create_node(val);
    new_node->link = current->link;
    current->link = new_node;
    return head;
}

struct node* delete_by_key(struct node *head,int key){
    struct node *current = head;
    struct node *previous = NULL;
    while(current != NULL && current->data != key){
        previous = current;
        current = current->link;
    }
    if(current == NULL){
        printf("key not found\n");
        return head;
    }
    previous->link = current->link;
    current->link = NULL;
    free(current);
    return head;
}

struct node* search_by_key(struct node *head,int key){
    struct node *current = head;
    int position = 1;
    while(current != NULL && current->data != key){
        current = current->link;
        position++;
    }
    if(current == NULL)
        printf("key not found\n");
    printf("key %d found at position %d \n",key,position);
    return head;
}