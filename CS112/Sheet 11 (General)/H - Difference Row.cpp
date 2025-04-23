// Problem: H - Difference Row
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/H
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(all(v));
  int temp = v[0];
  v[0] = v[n - 1];
  v[n - 1] = temp;

  for (int i = 0; i < n; i++)
    cout << v[i] << " ";
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
