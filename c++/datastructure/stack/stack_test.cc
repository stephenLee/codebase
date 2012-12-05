#include <iostream>
#include "stack.h"

using namespace std;

int main() {
  Stack<int> s(5);
  cout << s.empty() << endl;
  
  for (int i=1; i < 6; i++)
    s.push(i);
  cout << s.pop() << endl;
  cout << s.pop() << endl;

  LinkStack<int> ls(5);
  cout << ls.empty() << endl;

  for (int i = 1; i < 6; i++)
    ls.push(i);
  cout << ls.pop() << endl;
  cout << ls.pop() << endl;
}
