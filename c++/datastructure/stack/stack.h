// stack interface

#ifndef _STACK_H_
#define _STACK_H_

template<typename T>
class Stack {
public:
  Stack(int n);
  int empty() const;
  void push(T item);
  T pop();
private:
  T *s;
  int N;
};

template<typename T>
Stack<T>::Stack(int n) {
  s = new T[n];
  N = 0;
}

template<typename T>
int Stack<T>::empty() const {
  return N == 0;
}

template<typename T>
void Stack<T>::push(T item) {
  s[N++] = item;
}

template<typename T>
T Stack<T>::pop() {
  return s[--N];
}

// implement stack using link list.
template <typename T>
class LinkStack {
private:
  struct node {
    T item;
    node* next;
    node(T x, node* t) {
      item = x;
      next = t;
    }
  };
  typedef node *link;
  link head;
public:
  LinkStack(int) {
    head = 0;
  }
  int empty() const {
    return head == 0;
  }
  void push(T x) {
    head = new node(x, head);
  }
  T pop() {
    T item = head->item;
    link t = head->next;
    delete head;
    head = t;
    return item;
  }
};
#endif /* _STACK_H_ */
