#include <iostream>  
using namespace std;  

void Function(int Numbers[5]) {
  for (int i = 0; i < 5; i++) {  
    cout << Numbers[i] << "\n";    
  } 
}

int main() {  
  int Numbers[5] = {10, 20, 30, 40, 50};  
  Function(Numbers);
  return 0;
}  	
