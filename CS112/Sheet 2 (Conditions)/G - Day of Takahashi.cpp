// Problem: G - Day of Takahashi
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/G
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

int solve() {
  int a, b;
  cin >> a >> b;
  if (a <= b)
    return a;
  return a - 1;
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
