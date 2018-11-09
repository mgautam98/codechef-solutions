#include<bits/stdc++.h>
using namespace std;

bool balanced(string str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        char c = str[i];
        switch(c){
            case    '{' :   s.push(c);
                            break;
            case    '(' :   s.push(c);
                            break;
            case    '[' :   s.push(c);
                            break;
            case    '}' :   if(!s.empty() && s.top()=='{') s.pop();
                            else return false;
                            break;
            case    ')' :   if(!s.empty() && s.top()=='(') s.pop();
                            else return false;
                            break;
            case    ']' :   if(!s.empty() && s.top()=='[') s.pop();
                            else return false;
                            break;
        }
    }
    return s.empty();
}

int main ()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(balanced(str)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
