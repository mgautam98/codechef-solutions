#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin>>n>>x>>y;

    int lead1=0, lead2=0, count1=0;

    if(x>y){
       lead1 = x-y;
       count1++;
     }
    else lead2 = y-x;

    for(int i=0; i<n; i++){
      int x, y;
      cin>>x>>y;

      if(x>y){
        count1++;
        int diff = x - y;
        lead1 = max(lead1, diff);
      }else{
        int diff = y - x;
        lead2 = max(lead2, diff);
      }
    }
    if(count1>=n/2){
      cout<<"1 "<<lead1;
    }else{
      cout<<"2 "<<lead2;
    }

    return 0;
}
