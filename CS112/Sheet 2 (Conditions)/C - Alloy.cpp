// Problem: C - Alloy
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/C
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

string solve() {
  int a, b;
  cin >> a >> b;
  if (a > 0 && b == 0) {
    return "Gold";
  } else if (b > 0 && a == 0) {
    return "Silver";
  } else {
    return "Alloy";
  }
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
