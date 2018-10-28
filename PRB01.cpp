#include<bits/stdc++.h>
using namespace std;
int a[1000000] = {0};

int main()
{
  a[0] = a[1] = 1;
  for(int i=2; i<1000000; i++){
    if(a[i]!=1){
      for(int j=2*i; j<1000000; j+=i){
        a[j] = 1;
      }
    }
  }

  int t, n;
  cin>>t;
  while (t--) {
      cin>>n;
      if(a[n]==0){
        cout<<"yes\n";
      }else{
        cout<<"no\n";
      }
  }
  return 0;
}
