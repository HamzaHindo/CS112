// Problem: A - UOIAUAI
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/A
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

string solve() {
  bool flag = false;
  char c;
  cin >> c;
  char v[5] = {'a', 'u', 'i', 'o', 'e'};
  for (char x : v) {
    if (c == x)
      flag = true;
  }
  if (flag)
    return "vowel";
  return "consonant";
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
