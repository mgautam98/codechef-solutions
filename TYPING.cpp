#include <bits/stdc++.h>
using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 998244353;


int main() {
	int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        float times[n] = {0.0};
        
        for(int i=0; i<n; i++){
            int len = s[i].length();
            int prev = -1;
            for(int k=0; k<len; k++){
                cout<<times[i]<<endl;
                if(prev==0 && (s[i][k]=='d' || s[i][k]=='f')){
                    times[i]+=0.4;
                    prev=0;
                }else{
                    times[i]+=0.2;
                    prev=1;
                }
            }
        }
        int total = 0;
        for(int p=0; p<n; p++){
            total+=times[p];
        } 
        cout<<total<<endl;
    }
	return 0;
}
