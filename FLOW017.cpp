#include<bits/stdc++.h>
using namespace std;

main()
{
    int t, a[3];
    cin>>t;
    while (t--) {
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a+3);
        cout<<a[1]<<endl;
      }
}
