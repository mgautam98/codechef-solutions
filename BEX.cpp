#include<bits/stdc++.h>
using namespace std;

struct Book
{
    char name[16];
    int booksOnTop;
    int exercisesLeft;
    Book()
    {
    }
    Book(char *_name, int _exercisesLeft)
        : booksOnTop(0), exercisesLeft(_exercisesLeft)
    {
        strcpy(name, _name);
    }
};

main()
{
    int t, n;
    char name[16];
    stack<Book> s;
    cin>>t;
    while (t--) {
        cin>>n;
        if(n!=-1){
            scanf("%s", name);
            if(n==0){
                continue;
            }
            if(s.size()==0){
                s.push(Book(name, n));
            }else{
                Book &b = s.top();
                if(b.exercisesLeft>=n){
                    s.push(Book(name, n));
                }else{
                    b.booksOnTop++;
                }
            }
        }else{
            Book b = s.top();
            s.pop();
            cout<<b.booksOnTop<<" "<<b.name<<endl;
        }
    }
}
