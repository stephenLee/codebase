#include <iostream>
#include <ctime>

using namespace std;

// recursive version
int fib(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return fib(n-1) + fib(n-2);
}

// dynamic programming, Top-Down approach, memoization
int memo[100];

int memo_fib(int n) {
  if (n == 0 || n == 1)
    return n;
  if (memo[n] != -1)
    return memo[n];
  return memo[n] = memo_fib(n-1) + memo_fib(n-2);
}

int dp_fib(int n) {
  int dp[n+1], i;
  dp[0] = 0;
  dp[1] = 1;
  for (i = 2; i <=n; i++) 
    dp[i] = dp[i-1] + dp[i-2];
 
  return dp[n];
}

int main() {
  cout << "test revursive fib version: fib(45)=";
  clock_t start = clock();
  cout << fib(45);
  clock_t end = clock();
  cout << " Time cost: " << (double)(end-start) / CLOCKS_PER_SEC;
  cout << endl;


  for (int i = 0; i < 100; i++) 
    memo[i] = -1;
  cout << "test memo_fib version: memo_fib(45)=";
  clock_t memo_start = clock();
  cout << memo_fib(45);
  clock_t memo_end = clock();
  cout << " Time cost: " << (double)(memo_end-memo_start) / CLOCKS_PER_SEC;
  cout << endl;

  cout << "test dp_fib version: dp_fib(45)=";
  clock_t dp_start = clock();
  cout << dp_fib(45);
  clock_t dp_end = clock();
  cout << " Time cost: " << (double)(dp_end-dp_start) / CLOCKS_PER_SEC;
  cout << endl;

  cout << memo[3];
  return 0;
}
