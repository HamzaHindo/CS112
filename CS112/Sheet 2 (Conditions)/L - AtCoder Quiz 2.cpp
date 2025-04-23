// Problem: L - AtCoder Quiz 2
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/L
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

/*
    Novice, for a score not less than 0 but less than 40;
    Intermediate, for a score not less than 40 but less than 70;
    Advanced, for a score not less than 70 but less than 90;
    Expert, for a score not less than 90.
 */
int solve() {
  int x;
  cin >> x;

  if (x < 40)
    return 40 - x;
  if (x >= 40 && x < 70)
    return 70 - x;
  if (x >= 70 && x < 90)
    return 90 - x;
  return -1;
}

int main() {
  Fast();
  int s = solve();
  if (s == -1) {
    cout << "expert";
  } else {
    cout << s;
  }

  return 0;
}

void Fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}
