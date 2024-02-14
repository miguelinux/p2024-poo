#include <iostream>
using namespace std;

int main() {
  float  f = 0.123456789;
  double d = 0.123456789;
  cout << "Float : " << f << endl;
  cout << "Double: " << d << endl;
  cout << "Float : " << setpresicion(3) << f << endl;
  cout << "Double: " << setpresicion(3) << d << endl;
  cout << "Float : " << setpresicion(15) << f << endl;
  cout << "Double: " << setpresicion(15) << d << endl;
  return 0;
}
