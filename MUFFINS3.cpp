#include<bits/stdc++.h>
using namespace std;

main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        if(n==1 || n==2){
          cout<<n<<endl;
          continue;
        }
        cout<<(n/2) + 1<<endl;
    }
}
