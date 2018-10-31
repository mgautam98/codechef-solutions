//Runtime Error(SIGSEGV)
#include <bits/stdc++.h>
using namespace std;


int main() {
  int t, n, m;
  cin>>t;
  while(t--){
    cin>>n>>m;
    priority_queue <int, vector<int>, greater<int>> completedE, completedO;
    int temp;

    for(int i=0; i<m; i++){
      cin>>temp;
      if(temp&1){
        completedO.push(temp);
      }else{
        completedE.push(temp);
      }
    }

    for(int i=1; i<=n; i+=2){
      if(i==completedO.top()){
        completedO.pop();
        continue;
      }
      cout<<i<<" ";
    }
    cout<<"\n";

    for(int i=2; i<=n; i+=2){
      if(i==completedE.top()){
        completedE.pop();
        continue;
      }
      cout<<i<<" ";
    }
    cout<<"\n";
  }
	return 0;
}
