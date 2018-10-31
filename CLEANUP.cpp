//Runtime Error(SIGSEGV)
#include <bits/stdc++.h>
using namespace std;


int main() {
  int t, n, m;
  cin>>t;
  while(t--){
    cin>>n>>m;
    priority_queue <int, vector<int>, greater<int>> completed;
    int temp;

    for(int i=0; i<m; i++){
      cin>>temp;
      completed.push(temp);
    }

    vector <int> t1, t2;
    bool turn = true;
    for(int i=1; i<=n; i++){
      if(i==completed.top()){
        completed.pop();
        continue;
      }
      if(turn){
        t1.push_back(i);
        turn = false;
      }else{
        t2.push_back(i);
        turn = true;
      }
    }

    for(auto i:t1){
      cout<<i<<" ";
    }
    cout<<"\n";
    for(auto i:t2){
      cout<<i<<" ";
    }

    cout<<"\n";
  }
	return 0;
}
