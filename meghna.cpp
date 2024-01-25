#include <bits/stdc++.h>
using namespace std;

// void todigit(int n)
// {
//     int flag=0;
//     while(n>0)
//     {

        
//         cout<<isdigit('a')<<endl;
        
//         n=n/10;

//     }
//     // return flag;
// }


int main() {
       





    vector<int>v;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        assert(a!=0 || a!=1000000);
        v.push_back(a);
        s.insert(a);
    }
    
    int mex=-1;
    //sort(v.begin(),v.end());
    int cnt=0;
    for(auto i:s)
    {
        if(i!=cnt)
        {
            mex=cnt;
            break;
        }
        cnt++;
    }
    if(mex==-1)
    {
        mex=cnt;
    }
    //cout<<mex<<endl;
    //cout<<mex%2<<endl;
    
    return 0;
}
