#include <bits/stdc++.h>
using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 998244353;
#define ll long long int
#define N 5000

int main() {
  int t, n, inp, diff;
  int s[N];
  cin>>t;
  while(t--){
    cin>>n;
    int ans = INF;
    for(int i=0; i<n; i++){
      cin>>s[i];
    }

    sort(s, s + n);

    for(int i=0; i<n-1; i++){
      diff = s[i+1] - s[i];
      ans = min(ans, diff);
    }
    cout<<ans<<endl;
  }
	return 0;
}
