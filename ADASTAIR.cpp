#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 998244353;
#define ll long long int


int main() {
  ll t, n, k, temp, count;
  cin>>t;
  while(t--){
    cin>>n>>k;
    vector<int> a;
    for(int i=0; i<n; i++){
      cin>>temp;
      a.push_back(temp);
    }
    count = 0;

    for(ll i=0; i<n-1; i++){
      while(k<a[i]){
        count++;
        a[i]+=k;
      }
    }

    cout<<count<<endl;


    a.clear();
  }

	return 0;
}
