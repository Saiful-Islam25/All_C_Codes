#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size,top;
    int * arr;
};

void push(struct stack* ptr,int val){
    if(top=(size-1)){
        printf("Stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("Succesfully added item : %d\n",val);
    }
}

int pop(struct stack* ptr){
    if(top=-1){
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

    //printf("Before puhsing,Full : %d\n",isFull(sp));
    //printf("Before puhsing,Empty: %d\n",isEmpty(sp));
    push(sp,56);
    push(sp,5);
    push(sp,6);
    push(sp,77);
    push(sp,86);
    push(sp,56);
    push(sp,46);
    push(sp,96);
    push(sp,54);
    push(sp,51);

    
    //printf("After pushing,Full : %d\n",isFull(sp));
    //printf("After puhsing,Empty : %d\n",isEmpty(sp));

    printf("Popped %d from the stack\n",pop(sp));


}