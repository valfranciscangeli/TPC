#include <iostream>
using namespace std;

int main() {
  auto lambdaSuma = [&] (int a, int b) { return a + b; };
  cout << lambdaSuma(5, 6) << '\n';
  return 0;
}

//Las lambdas no necesitan llevar su tipo de retorno, ya que el compilador lo deduce de los return.