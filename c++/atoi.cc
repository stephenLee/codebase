#include <iostream>
#include <string.h>

using namespace std;

int atoi(const char* str)  {
  int num = 0;
  char digit;
  while ((digit = *str++) != '\0') {
    if(digit < '0' || digit > '9')
      return num;
    num *= 10;
    num += digit - '0';
  }
  return num;
}

int main() {
  cout << "Test atoi function: " << endl;
  cout << "Test Case 1: atoi() " << atoi("") << endl;  // 0
  cout << "Test Case 2: atoi(12a) " << atoi("12a") << endl; // 12
  cout << "Test Case 3: atoi(012) " << atoi("012") << endl; // 12
 }

