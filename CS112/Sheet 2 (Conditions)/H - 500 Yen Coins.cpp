// Problem: H - 500 Yen Coins
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/H
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

string solve() {
  int a, b;
  cin >> a >> b;
  a *= 500;
  if (a >= b)
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
