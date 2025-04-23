// Problem: C - Slot
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/C
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  string s;
  cin >> s;
  bool lose = false;
  char c = s[0];

  for (int i = 1; i < (int)s.size(); i++) {
    if (s[i] != c)
      lose = true;
  }

  if (lose)
    cout << "Lost";
  else
    cout << "Won";
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
