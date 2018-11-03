#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 100000007;
#define ll long long int

int count(vector<int> a){
    int m = -1*INF;
    
    int count = 0;
    for(auto item:a){
        if(item==1){
            count++;
        }else{
            m = max(m, count);
            count = 0;
        }
    }
    return m;
}

int main() {
    int n, q, k, temp;
    string str;
    cin>>n>>q>>k;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    cin>>str;
    int len = str.length();
    int i=0;

    while(q--){
        char ch = str[i];
        if(ch=='!'){
            rotate(a.begin(), a.begin() + a.size() - 1, a.end());
        }
        else if(ch=='?'){
            cout<<min(k, count(a))<<endl;
        }
        i++;
    }

	return 0;
}
