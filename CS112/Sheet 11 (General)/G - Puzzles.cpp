// Problem: G - Puzzles
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/G
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  int n, p;
  cin >> n >> p;
  int mn = 1e6;
  vector<int> v(p);
  for (int i = 0; i < p; i++)
    cin >> v[i];

  sort(all(v));

  for (int i = 0; i <= p - n; i++) {
    mn = min(v[i + n - 1] - v[i], mn);
  }

  cout << mn;
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
