// Sieve of Eratosthenes

#include <iostream>
#include <cstdlib>  // use atoi()

using namespace std;

int main(int argc, char *argv[])
{
  int i, N = atoi(argv[1]);
  int *a  = new  int[N];
  if (a == 0) {
    cout << "out of memory" << endl;
    return 0;
  }
  for (i = 2; i < N; i++) a[i] = 1;
  for (i = 2; i < N; i++)
    if (a[i])
      for(int j = i; j*i < N; j++)
        a[i*j] = 0;
  for (i = 2; i < N; i++)
    if (a[i]) cout << " " << i;
  cout << endl;
  return 0;
}
