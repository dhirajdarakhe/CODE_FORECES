#include <bits/stdc++.h>
using namespace std;
int main()
{int t=0;cin>>t;
  int nf = t / 5;
  if(t % 5 != 0 && t > 5)
    cout<<nf + 1;
  else if(t % 5 == 0 && t > 5)
    cout<<nf ;
  else 
    cout<<1;
  return 0;
}