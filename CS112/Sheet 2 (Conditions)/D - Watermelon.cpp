// Problem: D - Watermelon
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/D
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

string solve() {
  ll n;
  cin >> n;
  if (n % 2 == 0 && n != 2)
    return "YES";
  return "NO";
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
