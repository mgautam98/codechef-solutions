#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 100000007;
#define ll long long int

ll num(ll n){
    if(n==1 || n==2){
        return 1;
    }
    return num(n-1) + 2*num(n-2);
}

int main() {
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        ll ans = (1<<n);
        cout<<num(n)<<" "<<ans<<" ";
    }

	return 0;
}
