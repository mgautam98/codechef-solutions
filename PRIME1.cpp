#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//changing it to ll worked AC in 1.23 
int main() {

    vector<ll> primes;

    primes.push_back(2);

    for (ll i = 3; i <= 32000; i+=2) {
        bool isprime = true;
        ll cap = sqrt(i) + 1;

        vector<ll>::iterator p;
        for (p = primes.begin(); p != primes.end(); p++) {
            if (*p >= cap) break;
            if (i % *p == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) primes.push_back(i);
    }

    ll t, l, r;
    cin>>t;
    for(ll cases = 0; cases<t; cases++){
        if(cases){
            cout<<endl;
        }
        cin>>l>>r;
        if(l<2){
            l = 2;
        }
        for(ll i=l; i<=r; i++){
            bool isPrime = true;
            for(auto num:primes){
                if(num*num>=i*i){
                    break;
                }
                if(i%num==0){
                    isPrime = false;
                    break;
                }
            } 
            if(isPrime){
                cout<<i<<"\n";
            }
        }
    }
	return 0;
}
