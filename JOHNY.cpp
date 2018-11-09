#include <bits/stdc++.h>
using namespace std;

int search(vector<int> a, int ele){
    for(int i=0; i<a.size(); i++){
        if(ele==a[i]){
            return i;
        }
    }
    return -1;
}

int main() {
  int t, n, temp, k;
  cin>>t;
  while(t--){
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    cin>>k;
    int ele = a[k-1];
    sort(a.begin(), a.end());
    int ans = search(a, ele) + 1;
    cout<<ans<<endl;
  }
	return 0;
}
