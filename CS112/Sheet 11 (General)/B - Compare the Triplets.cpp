// Problem: B - Compare the Triplets
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/B
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  int a = 0, b = 0;
  vector<int> A(3);
  for (int i = 0; i < 3; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < 3; i++) {
    int x;
    cin >> x;
    if (A[i] == x)
      continue;
    if (A[i] > x) {
      a++;
      continue;
    }
    b++;
  }

  cout << a << " " << b << endl;
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
