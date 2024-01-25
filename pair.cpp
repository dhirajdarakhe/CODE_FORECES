#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

template<typename K, typename V>
std::pair<K,V> getMaxVal(const std::map<K,V> &map) {
    return *std::max_element(map.begin(), map.end(), [](std::pair<K,V> const &x, std::pair<K,V> const &y) {
        return x.second < y.second;
    });
}


typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
// ll MOD = 1e9+7;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


void solve(){
	ll n1, m1, l1;
	cin >> n1 >> m1 >> l1;
	
	ll st = l1 + n1 - 1;
	ll dhiraj = m1;
	if(dhiraj < l1){
		cout << dhiraj << ln;
		return;
	
	}
	else if(dhiraj == l1){
		cout << 0 << ln;
		return;
	}
	
	else{
		for(ll i = st; i >= l1; i--){
			dhiraj = dhiraj % i;
			if(dhiraj < l1){
				cout << dhiraj << ln;
				return;
			}
			else if(dhiraj == l1){
				cout << 0 << ln;
				return;
			}
			else if(dhiraj >= l1 && dhiraj <= st){
				cout << 0 << ln;
				return;
			}
		}
	}

	cout << dhiraj << ln;
	
}


int main(){
	fast_cin();
	ll t = 1;
	cin>>t;
	forn(i,t){
		solve();
	}
	return 0;
}