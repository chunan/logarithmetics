#include <iostream>
#include "logarithmetics.h"

using namespace std;

int main(int argc, const char *argv[]) {

  LogArithmetics::LLDouble z;
  cout << "z = " << z << endl;

  /* Initialize linearly */
  LogArithmetics::LLDouble a(1.1e-307, LogArithmetics::LLDouble::LINDOMAIN);
  cout << "a = " << a << endl;
  LogArithmetics::LLDouble b(1e-307, LogArithmetics::LLDouble::LINDOMAIN);
  cout << "b = " << b << endl;

  cout << "Operations in linear domain" << endl;
  cout << "a == b " << (a == b ? "True" : "False") << endl;
  cout << "a < b " << (a < b ? "True" : "False") << endl;
  cout << "a <= b " << (a <= b ? "True" : "False") << endl;
  cout << "a > b " << (a > b ? "True" : "False") << endl;
  cout << "a >= b " << (a >= b ? "True" : "False") << endl;
  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a / b = " << a / b << endl;

  cout << "Operations in log domain" << endl;
  cout << "a = " << a.to_log() << endl;
  cout << "b = " << b.to_log() << endl;
  cout << "a == b " << (a == b ? "True" : "False") << endl;
  cout << "a < b " << (a < b ? "True" : "False") << endl;
  cout << "a <= b " << (a <= b ? "True" : "False") << endl;
  cout << "a > b " << (a > b ? "True" : "False") << endl;
  cout << "a >= b " << (a >= b ? "True" : "False") << endl;
  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a / b = " << a / b << endl;


  return 0;
}
