#include<bits/stdc++.h>
using namespace std;

#define r1 2
#define c1 2
#define r2 2
#define c2 2
void mul(int m1[][c1],int m2[][c2]){
    int res[r1][c2];
    cout<<"Multiplication of given two matrices is :\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<r2;k++){
                res[i][j]+=m1[i][k]*m2[k][j];
            }
            cout<<res[i][j]<,endl;
        }
        cout<<endl;
    }
}