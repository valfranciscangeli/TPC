#include <iostream>
using namespace std;

void funcion(int &a) {
  a = 5;
}

int main() {
  int b = 2;
  funcion(b);
  cout << b << '\n'; // imprime 5
}