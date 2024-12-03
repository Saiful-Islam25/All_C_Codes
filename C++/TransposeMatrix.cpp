#include<bits/stdc++.h>
using namespace std;
#define N 4

void transpose(int a[N][N],int b[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            b[i][j]=a[j][i];
        }
    }
}
int main(){
    int a[N][N]={{1,1,1,1},
                {2,2,2,2},
                {3,3,3,3},
                {4,4,4,4}};
    int b[N]{N};
    transpose(a,b);


    return 0;
}

