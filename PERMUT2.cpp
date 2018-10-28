#include<bits/stdc++.h>
using namespace std;
int a[1000000];

int main()
{
    int n;
    while (1) {
      int n;
      cin>>n;
      if(n==0) break;

      for(int i=0; i<n; i++) cin>>a[i];

      int i=0;
      while(i<n){
        if(a[a[i] - 1]==a[i]) break;
        i++;
      }
      if(i<n){
        cout<<"ambiguous\n";
      }else{
        cout<<"not ambiguous\n";
      }
    }
    return 0;
}
