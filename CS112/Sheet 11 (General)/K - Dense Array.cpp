// Problem: K - Dense Array
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/K
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  ll n;
  ll res = 0;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n - 1; i++) {
    ll l = min(a[i], a[i + 1]);
    ll r = max(a[i], a[i + 1]);

    if (r / l <= 2)
      continue;

    ll temp = l;
    while (temp < ceil(r / 2)) {
      temp *= 2;
      res++;
    }
  }

  cout << res << '\n';
}

int main() {
  Fast();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

void Fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}
