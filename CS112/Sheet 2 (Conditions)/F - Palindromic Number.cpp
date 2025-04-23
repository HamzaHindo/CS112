// Problem: F - Palindromic Number
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/F
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

string solve() {
  int n;
  cin >> n;
  int num = 0;
  int temp = n;
  while (n > 0) {
    num *= 10;
    num += n % 10;
    n /= 10;
  }
  if (num == temp)
    return "Yes";
  return "No";
}

int main() {
  Fast();
  cout << solve();

  return 0;
}

void Fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}
