// Write code to reverse a C-Style String. (C-String means that “abcd” is represented as
//   five characters, including the null character.
#include <iostream>
#include <string.h>

using namespace std;

void  reverse_string(char* str) {
  char* end  = str;
  char tmp;
  if (str) {
    while (*end != '\0')
      end++;
    end--;
    
    while (str < end) {
      tmp = *str;
      *str++ = *end;
      *end-- = tmp;
    }
  }
}

int main() {
  cout << "Test reverse C-style string: " << endl;
  char source[] = "abcde";
  cout << "original string " << source << endl;
  reverse_string(source);
  cout << "reverse string " << source << endl;
  return 0;
}

