#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
  list<int> lst1;   // lst1 is empty
  list<int> lst2(3, 7);   // lst2 = (7 7 7)
  for (int j = 1; j <= 5; j++)   // lst1 = (1 2 3 4 5)
    lst1.push_back(j);
  list<int>::iterator i1 = lst1.begin(), i2 = i1, i3;
  i2++; i2++; i2++;
  list<int> lst3(++i1,i2);   // lst3 = (2, 3)
  
  list<int> lst4(lst1);      // lst4 = (1 2 3 4 5)
  i1 = lst4.begin();
  // void splice(i, lst): remove the nodes of list lst and insert them
  // into the list before the position referenced by iterator i
  lst4.splice(++i1, lst2);   //lst4 = (1 7 7 7 2 3 4 5)  lst2 = empty

  lst2 = lst1;    // lst2 = (1 2 3 4 5)
  i2 = lst2.begin();
  i3 = i2;
  // void splice(i, lst, first,last): remove from list lst the nodes in the
  // range indicated by iterators first and last and insert them into the list
  // before the position referenced by iterator i
  lst4.splice(i1, lst2, i2, ++i3);  // lst4 = (1 7 7 7 2 1 2 3 4 5)
                                    // lst2 = (3 4 5)
  lst4.remove(1);    // lst4 = (7 7 7 2 2 3 4 5)

  lst4.sort();      // lst4 = (2 2 3 4 5 7 7 7)
  lst4.unique();    // lst4 = (2 3 4 5 7)
  lst1.merge(lst2);  // lst1 = (1 2 3 3 4 4 5 5) lst2 = empty
  
  lst3.reverse();   // lst3 = (3 2)
  lst4.reverse();   // lst4 = (7 5 4 3 2)
  lst3.merge(lst4, greater<int>());   // lst3 = (7 5 4 3 3 2 2) lst4 = empty

  // bind2nd: return function object with second parameter bound
  lst3.remove_if(bind2nd(not_equal_to<int>(), 3));   // lst3 = (3 3)
  lst3.unique(not_equal_to<int>());                  // lst3 = (3 3)
  for(i1 = lst3.begin(); i1 != lst3.end(); i1++)
    cout << *i1 << " ";
  cout << endl;
}


