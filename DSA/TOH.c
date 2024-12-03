#include<stdio.h>

void TOH(int n,char a,char b,char c){
    if(n>0){
        TOH(n-1,a,c,b);
        printf("Move disk from %c to %c\n",a,b);
        TOH(n-1,c,b,a);
    }
}
int main(){
    int n=3;
    TOH(n,'A','B','C');
}