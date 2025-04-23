// Problem: $(PROBLEM)
// Contest: $(CONTEST)
// URL: $(URL)
// Start: $(DATE)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  int x, y, z; cin >>x>>y>>z;
  cout << x - y + z;
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
