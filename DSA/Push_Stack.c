#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void push(struct node** head,int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;

}

void print(struct node *node){
    while(node!=NULL){
        printf(" %d ",node->data);
        node=node->next;
    }
}

int main(){
    struct node* head=NULL;
    push(&head,1);
    push(&head,3);
    push(&head,9);
    push(&head,27);
    push(&head,81);

    printf("\nCreated linked list : ");
    print(head);

return 0;
}
