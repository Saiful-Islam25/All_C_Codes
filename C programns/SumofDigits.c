#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum=0;
    int ldig=0;
    while(n!=0){
        ldig=n%10;
        sum=sum+ldig;
        n=n/10;

    }
    printf("The sum of digits is : %d",sum);
    return 0;
}