#include<bits/stdc++.h>
using namespace std;

main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int sum = n%10;
        n/=10;
        while(n/10 > 0){
          n/=10;
        }
        sum +=n%10;
        cout<<sum<<endl;
    }
}
