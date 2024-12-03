#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of rows of 1st matrix : ");
    scanf("%d ",&m);
    int n;
    printf("Enter the number of columns of 1st matrix : ");
    scanf("%d",&n);

    int a[m][n];
    printf("\nEnter the elements of 1st matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int p;
    printf("Enter the number of rows of 2nd matrix : ");
    scanf("%d",&p);
    int q;
    printf("Enter the number of columns of 2nd matrix : ");
    scanf("%d",&q);

    int b[p][q];
    printf("\nEnter the elements of 2nd matrix : ");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d ",&b[i][j]);
        }
    }
    if(n!=p){
        printf("The matrixes can not be aultiplied ");
    }



    return 0;

}