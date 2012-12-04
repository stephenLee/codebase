// test string interface
#include <iostream> // use cout
#include "string.h"

using namespace std;

int main() {
  char a[10] = "abcde";
  char b[10] = "abcde";
  char c[10] = "abcfg";
  char d[10] = "fg";
  char e[10] = "abcde";
  
  cout << "The length of string a is: " << strlen(a) << endl; // 5

  cout << strcpy(a, d) << endl; // a=fg

  if (strcmp(b, e) == 0)
    cout << "Equal string" << endl;
  
  if (strncmp(b, c, 3) == 0)
    cout << "equal substring(prefix 3) of a and c" << endl;

  cout << strcat(b, d) << endl;
}
