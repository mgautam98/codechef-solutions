#include<bits/stdc++.h>
using namespace std;

main()
{
    int t, n, m;
    cin>>t;
    while (t--) {
        cin>>n>>m;
        int min = max(n, m);
        int max = n + m;
        cout<<min<<" "<<max<<endl;
    }
}
