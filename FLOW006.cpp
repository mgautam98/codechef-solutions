#include<bits/stdc++.h>
using namespace std;

main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int sum = 0;
        while(n>0){
          sum+=n%10;
          n/=10;
        }
        cout<<sum<<endl;
    }
}
