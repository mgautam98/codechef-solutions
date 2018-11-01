#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 100000007;
#define ll long long int

int count(vector<bool> a){
    int count=0;
    for(auto ix:a){
        if(ix){
            count++;
        }
    }
    return count;
}

int main() {
    int n, q;
    string str;
    int index;
    cin>>n>>q;
    vector<bool> a(n+1, false);
    while(q--){
        cin>>str;
        if(str.compare("CLOSEALL")==0){
            for(auto ix:a){
                ix = false;
            }
        }else{
            cin>>index;
            if(a[index]){
                a[index] = false;
            }else{
                a[index] = true;
            }
        }
        cout<<count(a)<<endl;
    }
	return 0;
}
