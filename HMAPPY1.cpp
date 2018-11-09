#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 100000007;
#define ll long long int

ll count(vector<ll> a){
    ll m = 0;
    
    int count = 0;
    for(auto item:a){
        if(item==1){
            count++;
        }else{
            m = (m>=count)?m:count;
            count = 0;
        }
    }
    return m;
}

int main() {
    ll n, q, k, temp;
    string str;
    cin>>n>>q>>k;
    vector<ll> a;
    for(ll i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    cin>>str;
    ll len = str.length();
    ll i=0;

    while(q--){
        char ch = str[i];
        if(ch=='!'){
            rotate(a.begin(), a.begin() + a.size() - 1, a.end());
        }
        else if(ch=='?'){
            ll ans = count(a);
            if(ans<=k){
                cout<<ans<<endl;
            }else{
                cout<<k<<endl;
            }
        }
        i++;
    }

	return 0;
}
