// Problem: D - Dragons
// Contest: Sheet 11 (General)
// URL: https://vjudge.net/contest/697771#problem/D
// Start: Wed 05 Mar 2025 09:58:31 PM EET
#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()

struct Dragon {
private:
  int strenth;
  int bonus;

public:
  Dragon() {}
  Dragon(int s, int b) {
    strenth = s;
    bonus = b;
  }
  int getStrenth() { return strenth; }
  int getBonus() { return bonus; }
};

bool sorting(Dragon d1, Dragon d2) {
  if (d1.getStrenth() == d2.getStrenth())
    return d1.getBonus() <= d2.getBonus();
  return d1.getStrenth() > d2.getStrenth();
}

void Fast();

void solve() {
  int s, n;
  cin >> s >> n;
  vector<Dragon> dragons(n);

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    dragons[i] = Dragon(x, y);
  }

  sort(all(dragons), sorting);

  for (int i = n - 1; i >= 0; i--) {
    if (s > dragons[i].getStrenth()) {
      s += dragons[i].getBonus();
      dragons.pop_back();
    } else
      break;
  }

  if (dragons.size())
    cout << "NO";
  else
    cout << "YES";
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
