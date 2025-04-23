// Problem: F - Partition
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/F
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

int solve() {
  priority_queue<int, vector<int>, greater<int>> pt;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    pt.push(x);
  }

  int sum = 0;

  while (!pt.empty()) {
    if (pt.top() < 0)
      sum -= pt.top();
    else
      sum += pt.top();
    pt.pop();
  }

  return sum;
}

int solve2() {

  int n;
  cin >> n;

  int sum{};
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sum += abs(x);
  }
  return sum;
}

int main() {
  Fast();
  cout << solve();
  // cout << solve2();

  return 0;
}

void Fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}
