#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        for(int i=0; i<n; i++) cin>>a[i];

        int ans = __gcd(a[0], a[1]);
        for(int i=2; i<n; i++){
          ans = __gcd(ans, a[i]);
        }

        for(int i=0; i<n; i++) cout<<a[i]/ans<<" ";
        cout<<endl;
    }
    return 0;
}
