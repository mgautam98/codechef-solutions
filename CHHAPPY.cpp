#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 100000007;
#define ll long long int


int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n, temp;
        bool flag = false;
        cin>>n;
        vector<ll> a;
        a.push_back(0);
        for(ll i=1; i<=n; i++){
            cin>>temp;
            a.push_back(temp);
        }
        for(ll i=1; i<=n-1; i++){
            for(ll j=1; j<=n; j++){
                if(a[a[i]]==a[a[j]] && a[i]!=a[j]){
                    cout<<"Truly Happy\n";
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(!flag){
            cout<<"Poor Chef\n";
        }
    }

	return 0;
}
