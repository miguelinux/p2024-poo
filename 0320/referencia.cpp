#include <iostream>
#include <string>

using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";

  food = "dona";
  cout << food << "\n";
  cout << meal << "\n";

  meal = "paleta";
  cout << food << "\n";
  cout << meal << "\n";


  return 0;
}
