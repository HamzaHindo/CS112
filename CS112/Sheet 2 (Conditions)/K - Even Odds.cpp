// Problem: K - Even Odds
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/K
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  ll n, m;
  cin >> n >> m;

  if (m <= (n + 1) / 2) {
    // odds
    cout << m * 2 - 1;
  } else {
    // evens
    cout << (m - (n + 1) / 2) * 2;
  }
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
