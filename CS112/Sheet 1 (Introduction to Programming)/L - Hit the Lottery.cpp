// Problem: $(PROBLEM)
// Contest: $(CONTEST)
// URL: $(URL)
// Start: $(DATE)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

const int DENOMINATIONS[5] = {1, 5, 10, 20, 100};

void solve() {
  ll balance, counter = 0, index = 4;
  cin >> balance;
  while (balance > 0 && index >= 0) {
    if (balance >= DENOMINATIONS[index]) {
      balance -= DENOMINATIONS[index];
      counter++;
      continue;
    }
    index--;
  }

  cout << counter;
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
