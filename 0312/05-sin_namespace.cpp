#include <iostream>
#include <string>

int main() {
  std::string nombreCompleto;
  std::cout << "Escribe tu nombre completo: ";
  getline(std::cin, nombreCompleto);
  std::cout << "Tu nombre es " << nombreCompleto << std::endl;
  return 0;
}
