#include <iostream>
#include <string>
using namespace std;

void saludar(string nombre, string saludo = "Hola,") { // el segundo parámetro es opcional
  cout << saludo << ' ' << nombre << '\n';
}

int main() {
  saludar("Diego Salas");
  saludar("", "Ohayou,");
  return 0;
}