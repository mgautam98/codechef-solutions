#include<bits/stdc++.h>
using namespace std;

main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int ans = 0;
        while(n>0){
          ans = ans*10 + n%10;
          n/=10;
        }
        cout<<ans<<endl;
    }
}
