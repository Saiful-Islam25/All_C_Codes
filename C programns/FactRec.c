#include<stdio.h>
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;    
    }
    return factorial;
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int factorial=fact(n);
    printf("The factorial of the given number is : %d",factorial);
    return 0;
}