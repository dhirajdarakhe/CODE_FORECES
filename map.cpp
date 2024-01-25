#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define f1(i,a,b) for(ll i=a;i<=b;i++)
#define f0(i,a,b) for(ll i=a;i<b;i++)
#define fr1(i,a,b) for(ll i=b;i>=a;i--)
#define all(v) v.begin(),v.end()
#define pb push_back
#define mod 1000000007

ll factors(ll n){
	ll ans = 0;
	for(ll i=2;i*i<=n;i++){
		
		if(n%i==0){
			
			while(n%i==0){
				ans++;
				n /= i;
			}
		}
	}
	if(n!=1){
		ans++;
	}
	return ans;
}

void pk(){
	
	ll n,m;
	cin>>n>>m;
	vector<ll> v;
	f0(i,0,n){
		ll x;
		cin>>x;
		v.pb(x);
	}
	
	ll maxi = *max_element(all(v));
	ll mini = *min_element(all(v));
	ll count_ele = count(all(v),m);
	
	if(count_ele>=1){
		cout<<"YES"<<endl;
	}
	else if(m>maxi){
		cout<<"NO"<<endl;
	}
	else if(m<mini){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
}

int main(){
    
    ll test;
    cin>>test;
    while(test--){
       pk();
    }
    
    return 0;
}