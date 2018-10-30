#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 998244353;
#define ll long long int

bool check(vector<ll> ps, ll mid, ll c, ll n){
  ll count = 1;
  ll prev = 0;
  for(ll i=1; i<n; i++){
    if((ps[i]-ps[prev])>=mid){
      count++;
      prev = i;
    }
  }
  return count>=c;
}


int main() {
	ll t;
  cin>>t;
  while(t--){
    ll c, n;
    cin>>n>>c;
    vector<ll> ps;
    for(ll i=0; i<n; i++){
      ll input;
      cin>>input;
      ps.push_back(input);
    }
    sort(ps.begin(), ps.end());
    ll s=0, e=ps[n-1];
    ll ans = s;
    while(s<=e){
        ll mid = (s+e)/2;
        bool isPossible = check(ps, mid, c, n);
        if(isPossible){
          ans = max(ans,mid);
          s = mid + 1;
        }else{
          e = mid - 1;
        }
    }
    cout<<ans<<endl;
  }
	return 0;
}
