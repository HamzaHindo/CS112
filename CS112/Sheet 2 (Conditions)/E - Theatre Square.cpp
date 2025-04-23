// Problem: E - Theatre Square
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/E
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

ll solve() {
  long double n, m, a;
  cin >> n >> m >> a;

  return ceil(n / a) * ceil(m / a);
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
