// Problem: J - Little Elephant and Bits
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/J
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  string s;
  bool flag = false;
  cin >> s;

  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == '0') {
      s.erase(i, 1);
      flag = true;
      break;
    }
  }

  if (!flag)
    s = s.erase(s.size() - 1);

  cout << s;
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
