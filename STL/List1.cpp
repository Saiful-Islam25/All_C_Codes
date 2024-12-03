#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int>ls;

    ls.push_back(2);
    ls.push_back(4);

    ls.push_front(5);

    ls.emplace_front(6);

}
int main(){
    explainList();
    cout<<"Values are ->";
}