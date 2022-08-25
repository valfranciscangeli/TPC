#include <iostream>
using namespace std;

void imprimir() {
  cout << "primer cout\n";
  return;
  cout << "segundo cout\n"; // este cout nunca se ejecuta
}

int main() {
  imprimir();
  return 0;
}
