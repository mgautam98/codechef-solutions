#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 998244353;
#define ll long long int


int main() {
  ll t,n;
  cin>>t;
  while(t--){
    cin>>n;
    ll fives=0, twos=0;

    for(ll i=5; i<=n; i*=5){
      fives+=floor(n/i);
    }

    for(ll i=2; i<=n; i*=2){
      twos+=floor(n/i);
    }

    cout<<min(twos, fives)<<endl;
  }
	return 0;
}
