#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum <<" "<<secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum <<" "<< secondNum << "\n";

  return 0;
}