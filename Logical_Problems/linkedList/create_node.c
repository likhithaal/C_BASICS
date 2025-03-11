#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link; //self referential structure (pointer to the structure of its same type)
};
int main(){
    struct node *head = NULL; //    | NULL |
                               //     head    
    head = (struct node *)malloc(sizeof(struct node));    //     | data | link |            | 50 | NULL |
                                                          //        1000                      1000
                                                          //          |                        |
                                                          //      | 1000 |                   | 1000 |
                                                          //        head (pointer)              head
    head->data = 50;
    head->link = NULL;
    
    printf("Head data: %d\n",head->data);
                                                           
    return 0;
}