#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 998244353;
#define ll long long int


int main() {
  ll a, b;
  cin>>a>>b;
  ll ans = a-b;

  int last = ans%10;
  if(last==9) last--;
  else last++;
  ans/=10;
  ans = ans*10 + last;
  cout<<ans;

	return 0;
}
