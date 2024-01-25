#include <bits/stdc++.h>
using namespace std;
#define ll long long
// HII
// this is dsqure
int main()
{

  string s;
  cin >> s;
  string ans = "";
  char i = '1';
  char d = '9';
  for (int k = 0; k < s.size(); ++k)
  {
    if (s[k] == 'I')
    {
      ans += i;
      i++;
      if (ans.size() == 1)
      {
        ans += i;
        i++;
      }
    }
    else
    {
      ans += d;
      d--;
      if (ans.size() == 1)
      {
        ans += d;
        d--;
      }
    }
  }
  cout <<
   ans;
  return 0;
}