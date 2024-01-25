
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1 = "AOYEUIaoyeui";
    string ans = "";
    for (int i = 0; i < s.size(); ++i)
    {
        if (s1.find(s[i]) != string::npos) {continue;};
        ans += '.';
        if(int(s[i]) <= 90){
            char c = s[i]|' ';
            ans += c;
        }else{
            ans += s[i];
        }
    }cout<<ans<<endl;
    return 0;
}







