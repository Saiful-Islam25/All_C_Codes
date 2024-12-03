#include<stdio.h>
int stair(int n){
    if(n<=2) return n;
    int totalways=stair(n-1);
    return totalways;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int way=stair(n);
    printf("%d",way);
    return 0;

}