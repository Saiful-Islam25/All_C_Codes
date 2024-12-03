#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct  node *next;   
};
void push(struct node** head,int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=(*head);
    (*head)=new_node;
}
void insert(struct node* pre_node,int new_data){
    if(pre_node==NULL){
        printf("The given previous node cannot be NULL");
        return;
    }
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=pre_node->next;
    pre_node->next=new_node;
   
}
void append(struct node** head,int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    struct node *last=*head;
    new_node->data=new_data;
    new_node->next=NULL;

    if(*head==NULL){
        *head=new_node;
        return;
    }
    while(last->next!=NULL)
     last=last->next;
    last->next=new_node;
}
void print(struct  node *node){
    while(node!=NULL){
        printf(" %d ",node->data);
        node=node->next;
    }

}
int main(){
    struct node* head = NULL;
    append(&head,1);
    push(&head,2);
    push(&head,3);
    append(&head,4);
    insert(head->next,5);
    printf("\nCreated Linked list is : ");
    print(head);

    return 0;
}
