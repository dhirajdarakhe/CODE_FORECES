#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
  // Calculate the greatest common divisor of a and b
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
ll inverse(ll a, ll b) {
  // Calculate the modular inverse of a modulo b
  ll t = 0;
  ll newt = 1;
  ll r = b;
  ll newr = a;
  while (newr != 0) {
    ll quotient = r / newr;
    t = newt;
    newt = t - quotient * newt;
    r = newr;
    newr = r - quotient * newr;
  }
  if (r > 1) {
    return -1; // a is not invertible modulo b
  }
  if (t < 0) {
    t += b;
  }
  return t;
}
ll solve(ll a[], int n) {
  // Calculate the product of all elements in the array
  ll N = 1;
  for (int i = 0; i < n; i++) {
    N *= a[i];
  }
  // Calculate the value of x using the Chinese Remainder Theorem
  ll x = 0;
  for (int i = 0; i < n; i++) {
    ll Ni = N / a[i];
    ll Mi = Ni % a[i];
    x += Mi * Ni * inverse(Ni, a[i]);
  }
  // Check if x is a valid solution
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      if (gcd(a[i]+x, a[j]+x) != 1) {
        return -1;
      }
    }
  }
  return x;
}



int main() {
  // Test the function with the example from the problem statement
  ll a[] = {5, 7, 10};
  cout << solve(a, 3) << endl; // should output 23

  ll b[] = {3, 3, 4};
  cout << solve(b, 3) << endl; // should output -1
  return 0;
}
