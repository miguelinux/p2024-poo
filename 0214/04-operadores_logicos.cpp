#include <iostream>
using namespace std;

int main() {
  int x = 5;
  cout << (x > 3 && x < 10) << endl;
  cout << !(x > 3 && x < 10) << endl;
  cout << !(x > 3) << endl;
  return 0;
}
