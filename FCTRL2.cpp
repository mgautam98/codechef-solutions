#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        if(n==0){
            cout<<"0\n";
            continue;
        }
        int flag = n, size=0, r, i=0;
        int num[200] = {0};

        while(flag>0){
          num[i++] = flag%10;
          flag/=10;
          size++;
        }

        int index, temp, x;
        for(int i = 2; i<n; i++){
          temp=0;
          for(index=0;index<size;index++) {
                 x = num[index]*i + temp;
                 num[index] = x%10;
                 temp = x/10;
              }

          while(temp>0){
            num[index++] = temp%10;
            temp/=10;
            size++;
          }
        }

        for(int i=size-1; i>=0; i--) cout<<num[i];
        cout<<"\n";
    }
    return 0;
}
