//pending
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
#define mod 1000000007

ll T(int n, int k, int a[]){
  if(n<=k) return 1;

  ll ans = 0;
  for(ll i=1; i<=k; i++){
    if(a[i]!=0)
      ans+=a[i]%1000000007;
    else
      ans+=T(n-i, k, a)%1000000007;
  }
  return ans%1000000007;
}

int main() {

	ll n, k;
	cin>>n>>k;
    int *a = new int[k];
    for(int i=0; i<k; i++) a[i] = 0;
    cout<<T(n, k, a)<<endl;
	return 0;
}
