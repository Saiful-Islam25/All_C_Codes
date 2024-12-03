#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Sheikh. " << age << " years old. \n";
}

int main() {
  myFunction("Nafis", 3);
  myFunction("Nijhum", 14);
  myFunction("Nabil", 2);
  return 0;
}
