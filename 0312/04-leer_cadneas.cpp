#include <iostream>
#include <string>

using namespace std;

int main() {
  string nombreCompleto;
  cout << "Escribe tu nombre completo: ";
  getline(cin, nombreCompleto);
  cout << "Tu nombre es " << nombreCompleto << endl;
  return 0;
}
