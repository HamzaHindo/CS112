// Problem: B - +-x
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/B
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  int a, b;
  cin >> a >> b;
  cout << max(max(a + b, a - b), a * b);
}

int main() {
  Fast();
  solve();

  return 0;
}

void Fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}
