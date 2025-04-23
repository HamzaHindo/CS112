// Problem: A - Electronics Shop
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/A
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
  /*
   * Write your code here.
   */
  int sum = -1;
  for (int i = 0; i < keyboards.size(); i++) {
    for (int j = 0; j < drives.size(); j++) {
      if (keyboards[i] + drives[j] > b)
        continue;
      sum = max(sum, keyboards[i] + drives[j]);
    }
  }
  return sum;
}

int main() {
  Fast();

  int b, x, y;
  cin >> b >> x >> y;
  vector<int> keyboards(x);
  vector<int> drives(y);

  for (int i = 0; i < x; i++) {
    cin >> keyboards[i];
  }
  for (int i = 0; i < y; i++) {
    cin >> drives[i];
  }

  cout << getMoneySpent(keyboards, drives, b);

  return 0;
}

void Fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}
