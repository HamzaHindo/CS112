// Problem: $(PROBLEM)
// Contest: $(CONTEST)
// URL: $(URL)
// Start: $(DATE)
#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
  double a, b;
  cin >> a >> b;

  cout << setprecision(10) << (a - b) / 3 + b;
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
