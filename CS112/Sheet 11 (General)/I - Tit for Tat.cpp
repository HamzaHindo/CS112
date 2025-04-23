#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(s) s.begin(), s.end()
void Fast();

void solve() {
	ll len, k;
  cin >> len >> k;
  long long arr[len];
  for(int i = 0; i<len; i++){
  	cin >> arr[i];
  }
  ll i = 0;
  while(k--&&i<len-1){
  	if(arr[i]==0){
    	i++;
      	continue;
    }
    arr[i]--, arr[len-1]++;
  }
  for(int i = 0;i<len; i++){
  	cout << arr[i] <<' ';
  }
  cout << '\n';
// code here
}

int main() {
  Fast();
  ll t; cin >> t;
  while(t--)solve();
  return 0;
}

void Fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

