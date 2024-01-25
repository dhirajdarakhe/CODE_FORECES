// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int a;
// //     cin >> a;
// //     if (a >= 0)
// //     {
// //         cout << a;
// //         return 0;
// //     }
// //     int l = abs(a % 10);
// //     int b = a / 10;
// //     int lb =abs (b % 10);
// //     a /= 10;
// //     a /= 10;
// //     string s = to_string(a);
// //     if (l >= lb)
// //     {
// //         s += to_string(l);
// //     }
// //     else
// //     {
// //         s += to_string(lb);
// //     }
// //     if(s=="00")
// //         cout << 0;
// //     else
// //         cout<<s;
// //     return 0;
// // }

// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // { int s =9;
// // // string p = "";
// // // p += to_string(s);
// // // cout<<s;
// // //   return 0;
// // // }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "";
//     cin>>s;
//     if(s[0]!='-'){
//         cout<<s;
//         return 0;
//     }
//     int l = (int)s[s.size()-1];
//     int lb = (int)s[s.size()-2];
//     s.pop_back();
//     s.pop_back();
//     if(l<=lb){
//         s = s+(char)l;
//     }else{
//          s =s+(char)lb;
//     }
//     if(s == "-0"){
//         cout<<0; return 0;
//     }cout<<s;
 
// }
#include <bits/stdc++.h>
using namespace std;
bool is_PerfectBinary(int a){
  string s= bitset<35>(a).to_string();
  for (int i = 0; i < 34; i++)
  {
    if(s[i]=='1'&&s[i+1]=='0'){
        return false;
    }
  }
  return true;
}
int main()
{

   int t =0;cin>>t;while(t--)
   {int a;cin>>a;
   int i =1;
   while(i<=a){
       if(a%i==0){
           if(is_PerfectBinary(a/i)){
              cout<<i<<endl;
              return 0;
           }
       }
       i++;
   }}
// //    string s = bitset<35>(1234567893).to_string();
//    cout<<is_PerfectBinary(8)<<endl;
//    cout<<is_PerfectBinary(7)<<endl;
//    cout<<is_PerfectBinary(15)<<endl;
  return 0;
}