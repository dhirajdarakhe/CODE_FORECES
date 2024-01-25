#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = " ";
    // cin >> st;
    st = "Dhirahf";
    int c = 0, s = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] >= 65 && st[i] <= 90)
        {
            c++;
        }
        else
        {
            s++;
        }
    }
    if (s < c)
    {  
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] >= 97 && st[i] <= 122)
            {
                // st[i] = 'A' +(st[i] - 'a');
                 st[i] = st[i] - ('a' - 'A');
            }
        }
        cout << st;
    }
    else
    {
        for (int i = 0; i < st.size(); i++)
        {
            if (65 >= st[i] && st[i] <= 90)
            {
                // st[i] = 'a' + (st[i] - 'A');
                st[i] = st[i] + ('a' - 'A');
            }
        }
        cout << st;
    }

    return 0;
}



#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int cu=0,cl=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>=97&&s[i]<=122){
            cl++;
        } else {
            cu++;
        }
    }
    if(cu>cl){
        for(int i=0; i<s.length(); i++){
            if(s[i]>=97&&s[i]<=122){
                s[i] = s[i]-('a'-'A');
            }
        }
    } else {
        for(int i=0; i<s.length(); i++){
            if(s[i]>=65&&s[i]<=90){
                s[i] = s[i]+('a'-'A');
            }
        }
    }
    cout<<s<<endl;
    
    
    return 0;
}