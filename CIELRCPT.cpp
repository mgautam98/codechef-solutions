#include<bits/stdc++.h>
using namespace std;

main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        if(n<=2048){
          int count = 0;
          while(n>0){
            count++;
            n = n&(n-1);
          }
          cout<<count<<endl;
        }else{
          int count=0;
          int i = 1;

          while(n - i*2048 >= 2048){
            count++;
            i++;
          }

          n = n - (i-1)*2048;
          while(n>0){
            count++;
            n = n&(n-1);
          }
          cout<<count<<endl;
        }
    }
}
