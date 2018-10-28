#include<bits/stdc++.h>
using namespace std;

main()
{
  int x;
  float y;
  cin>>x>>y;
  if(x%5==0 && y>(x+0.50)){
    printf("%.2f\n", (y-x - 0.50));
  }else{
    printf("%.2f\n", y);
  }
}
