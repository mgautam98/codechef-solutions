#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        vector <int> a;
        for(int i=0; i<n; i++){
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end(), greater<int>());
        int target = a[k-1], count=0;
        for(int i=0; i<n; i++){
          if(a[i] < target){
            break;
          }
          count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
