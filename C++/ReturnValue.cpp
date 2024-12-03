#include <iostream>
using namespace std;

int myFunction(int x, int y,int z) {
  return x + y+z;
}

int main() {
  cout << myFunction(5, 3,10);
  return 0;
}