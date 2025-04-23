// Problem: E - Currency System in Geraldion
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/E
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  set<int> st;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    st.insert(x);
  }

  if (*st.begin() == 1) {
    cout << -1;
  } else
    cout << 1;
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
