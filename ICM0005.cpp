#include <iostream>
#include <algorithm>
#include <vector>
#define MOD 998244353
#define ll long long int
#define pair pair<ll,ll>
#define push push_back 
using namespace std;

ll gcd(ll a, ll b) {
    if(!b) {
        return a;
    } 
    return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return a/gcd(a,b)*b;
}
ll temp;
ll pow(ll b) {
    if(!b)
        return 1;
    temp=pow(b/2);
    if(b&1)    
       temp*=temp*2;
    else
        temp*=temp;
    return temp%MOD;
}

int main() {
	// your code goes here
	ll t,n,x,y;
	cin>>t;
	while(t>0) { 
	    cin>>n;
	    vector<pair> v;
	    for(ll i=0;i<n;i++) {
    	    cin>>x>>y;
    	    v.push({x,y});
	    }
	    sort(v.begin(),v.end());
	    ll g[n+1],LCM=1;
	    g[n]=v[n-1].first;
        for(ll i=n-1;i>=0;i--) {
            g[i]=gcd(g[i+1],v[i].first);    
        }	
        ll ans=0;
        for(int i=0;i<n;i++) {
            LCM=lcm(LCM,v[i].first);
            if(g[i+1]%LCM==0) {
                if(g[i]%LCM==0){
                    if(i+1==n)
                        ans+=(pow(v[i].second)-2)%MOD;
                    else
                        ans+=(pow(v[i].second)-1)%MOD;
                } else {
                    ans+=1;
                }
            }
            ans%=MOD;
        }
        cout<<ans<<endl;
	    t--;
	}
	return 0;
}
