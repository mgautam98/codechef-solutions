#include<bits/stdc++.h>
using namespace std;

main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int count=0;
        while(n>0){
          int digit = n%10;
          if(digit==4){
            count++;
          }
          n = n/10;
        }
        cout<<count<<endl;
    }
}
