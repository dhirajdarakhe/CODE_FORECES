#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
typedef vector<ll> v64;
typedef vector<int> v32;
#define fast_DHIraj() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
void dhiraj();
ll binaryExpoRRec(ll a, ll b) {if (b == 0) return 1 * 1ll;ll res = binaryExpoRRec(a, b / 2);if (b & 1) {return a * res * res;} return res * res;}
vector<int> prime(10000000, 1);
void isPrime(){int c = 0;for (int p = 2; p * p <= 10000000; p++) if (prime[p] == 1)for (int i = p * 2; i <= 10000000; i += p){prime[i] = 0;}}
int main()
{
fast_DHIraj();
// #ifndef ONLINE_JUDGE
// freopen('input.txt', 'r', stdin);
// freopen('error.txt', 'w', stderr);
// freopen('output.txt', 'w', stdout);
// #endif
int t = 1;
cin >> t;
while (t--) {dhiraj();cout<<'\n'; } return 0;
}
void dhiraj()
{
 ll a;
cin>>a;
v32 v(a),b(a);
forn(i,a)cin>>v[i];
forn(i,a)cin>>b[i];
v32 ans = {9,9,9};
forn(i,a){
    if(i==0 && v[i]!=b[i]){
        cout<<"NO";
        return;}
    if(v[i]==b[i]){
        if(v[i] == 0){
           ans[1] = 0;
        }else if(v[i] == -1){
             ans[0] = -1;
        }else if(v[i] == 1){
            ans[2] = 1;
        }
    }
    if(v[i]!=b[i]){
        if(v[i] < b[i] && ans[2] == 9){
             cout<<"NO";
             return;
        }else if(v[i] < b[i] && ans[2] == 1){
             if(v[i] == 0){
           ans[1] = 0;
        }else if(v[i] == -1){
             ans[0] = -1;
        }else if(v[i] == 1){
            ans[2] = 1;
        }
        }
        if(v[i] > b[i] && ans[0] == 9){
             cout<<"NO";
             return;
        }
        else if(v[i] > b[i] && ans[0] == -1){
             if(v[i] == 0){
           ans[1] = 0;
        }else if(v[i] == -1){
             ans[0] = -1;
        }else if(v[i] == 1){
            ans[2] = 1;
        }
        }
    }   
}
cout<<"YES";
}


