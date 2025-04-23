// Problem: I - Conditional Statements
// Contest: Sheet 2 (Conditions)
// URL: https://vjudge.net/contest/697762#problem/I
// Start: Mon 14 Apr 2025 03:21:10 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

string numsINEng[10] = {"zero", "one", "two",   "three", "four",
                        "five", "six", "seven", "eight", "nine"};

string solve() {
  int n;
  cin >> n;

  if (n > 9)
    return "Greater than 9";
  return numsINEng[n];
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
