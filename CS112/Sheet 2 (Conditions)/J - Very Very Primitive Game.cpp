// Problem: J - Very Very Primitive Game
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/J
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b || (a == b && c == 1))
    cout << "Takahashi";
  if (a < b || (a == b && c == 0))
    cout << "Aoki";
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
