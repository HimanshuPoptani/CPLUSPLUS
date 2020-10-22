#include <iostream>
using namespace std;
// return can only be used in case void is not the function
int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << "Value of the function is: " << myFunction(3) << endl;
  return 0;
}
