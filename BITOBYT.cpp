#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int a[3] = {0}, times = 0, num=n;
        int i=1;
        if(n>=26){
          num = n%26;
          times = n/26;
        }
        a[0] = a[1] = a[2] = times;
        if(num!=0){
          if(num>10){
            a[2]++;
          }else if(num>2){
            a[1]++;
          }else{
            a[0]++;
          }
        }
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }
    return 0;
}
