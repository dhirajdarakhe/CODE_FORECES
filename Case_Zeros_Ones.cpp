#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "";
    int a ;cin>>a;
    cin>>s;
    int a1=0,a0=0;
    for (int i = 0; i < a; i++)
    {
     if(s[i]=='1'){
         a1++;
     }
     else{
         a0++;
     }
    }
    if(a1>a0){
        cout<<a-(a0*2);
    }else{
        cout<<a-(a1*2);
    }
    
  return 0;
}