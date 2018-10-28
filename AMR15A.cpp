#include<bits/stdc++.h>
using namespace std;
int a[1000000] = {0};
int main()
{
  int n;
    cin>>n;
    int count = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0) count++;
    }
    if(count > n/2){
      cout<<"READY FOR BATTLE\n";
    }else{
      cout<<"NOT READY\n";
    }
  return 0;
}
