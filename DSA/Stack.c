#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size,top;
    int * arr;
};
int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    } 
}
int isFull(struct  stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }      
}
void push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("Stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("Succesfully added item : %d\n",val);
   
    }
}
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow! Cannot pop from the stack\n");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    printf("Stack has been created succesfully\n");

    push(sp,11);
    push(sp,29);
    push(sp,3);
    push(sp,81);
    push(sp,32);
    push(sp,49);
    push(sp,5);
    push(sp,61);
    push(sp,56);
    push(sp,91);

    printf("\nPopped %d from the stack\n",pop(sp));

    return 0;

}
