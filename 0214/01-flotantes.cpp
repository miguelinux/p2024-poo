#include <iostream>
#include <iomanip>      // std::setprecision
			//
using namespace std;

int main() {
  float  f = 0.1234567890123;
  double d = 0.1234567890123;
  cout << "Float : " << f << endl;
  cout << "Double: " << d << endl;
  cout << "Float : " << setprecision(3) << f << endl;
  cout << "Double: " << setprecision(3) << d << endl;
  cout << "Float : " << setprecision(15) << f << endl;
  cout << "Double: " << setprecision(15) << d << endl;
  return 0;
}
